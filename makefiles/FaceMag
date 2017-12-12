CHAL=FaceMag

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/prng.c.o -c lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/filesystem.c.o -c lib/filesystem.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/wildcardsearch.c.o -c lib/wildcardsearch.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/input.c.o -c lib/input.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/stickyposts.c.o -c src/stickyposts.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/auth.c.o -c src/auth.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/posts.c.o -c src/posts.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/comms.c.o -c src/comms.c
	$(CC) $(FLAGS) -o FaceMag_patched lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/math.c.o lib/stdlib.c.o lib/filesystem.c.o lib/wildcardsearch.c.o lib/stdio.c.o lib/string.c.o lib/input.c.o src/stickyposts.c.o src/auth.c.o src/posts.c.o src/service.c.o src/comms.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/prng.c.o -c lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/filesystem.c.o -c lib/filesystem.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/wildcardsearch.c.o -c lib/wildcardsearch.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/input.c.o -c lib/input.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/stickyposts.c.o -c src/stickyposts.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/auth.c.o -c src/auth.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/posts.c.o -c src/posts.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/comms.c.o -c src/comms.c
	$(CC) $(FLAGS) -o FaceMag lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/math.c.o lib/stdlib.c.o lib/filesystem.c.o lib/wildcardsearch.c.o lib/stdio.c.o lib/string.c.o lib/input.c.o src/stickyposts.c.o src/auth.c.o src/posts.c.o src/service.c.o src/comms.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/prng.c.o -c pov_1/prng.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/math.c.o -c pov_1/math.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/stdlib.c.o -c pov_1/stdlib.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/stdio.c.o -c pov_1/stdio.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/string.c.o -c pov_1/string.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov1.c.o -c pov_1/pov1.c
	$(CC) $(FLAGS) -o FaceMag_pov_1 pov_1/prng.c.o pov_1/math.c.o pov_1/stdlib.c.o pov_1/stdio.c.o pov_1/string.c.o pov_1/pov1.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/prng.c.o pov_1/math.c.o pov_1/stdlib.c.o pov_1/stdio.c.o pov_1/string.c.o pov_1/pov1.c.o lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/math.c.o lib/stdlib.c.o lib/filesystem.c.o lib/wildcardsearch.c.o lib/stdio.c.o lib/string.c.o lib/input.c.o src/stickyposts.c.o src/auth.c.o src/posts.c.o src/service.c.o src/comms.c.o lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/math.c.o lib/stdlib.c.o lib/filesystem.c.o lib/wildcardsearch.c.o lib/stdio.c.o lib/string.c.o lib/input.c.o src/stickyposts.c.o src/auth.c.o src/posts.c.o src/service.c.o src/comms.c.o FaceMag_pov_1 FaceMag_patched FaceMag
