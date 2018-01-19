CHAL=Document_Rendering_Engine

CC=/usr/bin/gcc
CXX=/usr/bin/g++

LIBCGC=../../shared/tsid/libcgc.a
LIBPOV=../../shared/tsid/libpov.a
LIBS=$(LIBCGC) $(LIBPOV)

FLAGS=-DFORTIFY_SOURCE=0 -DLINUX -Derrno=__cgc_errno -fno-builtin -w -g3 -m32 -fno-stack-protector
CFLAGS=$(FLAGS) -std=gnu99
CXXFLAGS=$(FLAGS) -g -std=gnu++11 

INCLUDE=-I ../../shared/tsid/include -I ../../shared/tsid/include/tiny-AES128-C
POV_INCLUDE=$(INCLUDE) -I ../../shared/tsid/include/libpov -I ../../shared/tsid/include/libpov/pov

LCGC=-L $(dir $(LIBCGC)) -lcgc
LPOV=$(LCGC) -lpov

all: $(LIBCGC) patched vulnerable pov

patched:
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -DNDEBUG -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -DNDEBUG -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -DNDEBUG -o src/service.c.o -c src/service.c
	$(CXX) $(FLAGS) -o Document_Rendering_Engine_patched lib/malloc.c.o lib/libc.c.o src/service.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o src/service.c.o -c src/service.c
	$(CXX) $(FLAGS) -o Document_Rendering_Engine lib/malloc.c.o lib/libc.c.o src/service.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -g -DNDEBUG -pedantic -O0 -o pov_2/pov2.c.o -c pov_2/pov2.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -DNDEBUG -pedantic -O0 -o pov_1/pov1.c.o -c pov_1/pov1.c
	$(CXX) $(FLAGS) -o Document_Rendering_Engine_pov_2 pov_2/pov2.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Document_Rendering_Engine_pov_1 pov_1/pov1.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov2.c.o pov_1/pov1.c.o lib/malloc.c.o lib/libc.c.o src/service.c.o lib/malloc.c.o lib/libc.c.o src/service.c.o Document_Rendering_Engine_pov_2 Document_Rendering_Engine_pov_1 Document_Rendering_Engine_patched Document_Rendering_Engine
