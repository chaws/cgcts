CHAL=SIGSEGV

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -fcommon -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -fcommon -o src/service.c.o -c src/service.c
	$(CC) $(FLAGS) -o SIGSEGV_patched lib/libc.c.o src/service.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o src/service.c.o -c src/service.c
	$(CC) $(FLAGS) -o SIGSEGV lib/libc.c.o src/service.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(FLAGS) -o SIGSEGV_pov_2 pov_2/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o SIGSEGV_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov.c.o pov_1/pov.c.o lib/libc.c.o src/service.c.o lib/libc.c.o src/service.c.o SIGSEGV_pov_2 SIGSEGV_pov_1 SIGSEGV_patched SIGSEGV
