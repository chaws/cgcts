CHAL=GreatView

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O3 -g -fcommon -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O3 -g -fcommon -o src/viewscript.c.o -c src/viewscript.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O3 -g -fcommon -o src/service.c.o -c src/service.c
	$(CXX) $(FLAGS) -o GreatView_patched lib/libc.c.o src/viewscript.c.o src/service.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -fcommon -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -fcommon -o src/viewscript.c.o -c src/viewscript.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -fcommon -o src/service.c.o -c src/service.c
	$(CXX) $(FLAGS) -o GreatView lib/libc.c.o src/viewscript.c.o src/service.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_4 -I include -I lib -I src -O3 -g -fcommon -pedantic -O0 -o pov_4/pov.c.o -c pov_4/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -O3 -g -fcommon -pedantic -O0 -o pov_3/pov.c.o -c pov_3/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O3 -g -fcommon -pedantic -O0 -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O3 -g -fcommon -pedantic -O0 -o pov_2/pov.c.o -c pov_2/pov.c
	$(CXX) $(FLAGS) -o GreatView_pov_1 pov_1/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o GreatView_pov_2 pov_2/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o GreatView_pov_3 pov_3/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o GreatView_pov_4 pov_4/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_4/pov.c.o pov_3/pov.c.o pov_1/pov.c.o pov_2/pov.c.o lib/libc.c.o src/viewscript.c.o src/service.c.o lib/libc.c.o src/viewscript.c.o src/service.c.o GreatView_pov_4 GreatView_pov_3 GreatView_pov_1 GreatView_pov_2 GreatView_patched GreatView
