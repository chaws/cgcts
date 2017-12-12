CHAL=Mixology

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -o lib/asciiencode.c.o -c lib/asciiencode.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -o lib/libmixology.c.o -c lib/libmixology.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -o lib/zoom.c.o -c lib/zoom.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -o src/service.c.o -c src/service.c
	$(CC) $(FLAGS) -o Mixology_patched lib/asciiencode.c.o lib/libmixology.c.o lib/zoom.c.o lib/libc.c.o src/service.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/asciiencode.c.o -c lib/asciiencode.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/libmixology.c.o -c lib/libmixology.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/zoom.c.o -c lib/zoom.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/service.c.o -c src/service.c
	$(CC) $(FLAGS) -o Mixology lib/asciiencode.c.o lib/libmixology.c.o lib/zoom.c.o lib/libc.c.o src/service.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(FLAGS) -o Mixology_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov.c.o lib/asciiencode.c.o lib/libmixology.c.o lib/zoom.c.o lib/libc.c.o src/service.c.o lib/asciiencode.c.o lib/libmixology.c.o lib/zoom.c.o lib/libc.c.o src/service.c.o Mixology_pov_1 Mixology_patched Mixology
