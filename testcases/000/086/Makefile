CHAL=EternalPass

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -fcommon -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -fcommon -o lib/prng.c.o -c lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -fcommon -o lib/crc32.c.o -c lib/crc32.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -fcommon -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -fcommon -o lib/list.c.o -c lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -fcommon -o src/adjectives.c.o -c src/adjectives.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -fcommon -o src/nouns.c.o -c src/nouns.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -fcommon -o src/verbs.c.o -c src/verbs.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -fcommon -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -fcommon -o src/adverbs.c.o -c src/adverbs.c
	$(CXX) $(FLAGS) -o EternalPass_patched lib/malloc.c.o lib/prng.c.o lib/crc32.c.o lib/libc.c.o lib/list.c.o src/adjectives.c.o src/nouns.c.o src/verbs.c.o src/service.c.o src/adverbs.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o lib/prng.c.o -c lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o lib/crc32.c.o -c lib/crc32.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o lib/list.c.o -c lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o src/adjectives.c.o -c src/adjectives.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o src/nouns.c.o -c src/nouns.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o src/verbs.c.o -c src/verbs.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o src/adverbs.c.o -c src/adverbs.c
	$(CXX) $(FLAGS) -o EternalPass lib/malloc.c.o lib/prng.c.o lib/crc32.c.o lib/libc.c.o lib/list.c.o src/adjectives.c.o src/nouns.c.o src/verbs.c.o src/service.c.o src/adverbs.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_2/crc32.c.o -c pov_2/crc32.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CXX) $(FLAGS) -o EternalPass_pov_2 pov_2/pov.c.o pov_2/crc32.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o EternalPass_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov.c.o pov_2/crc32.c.o pov_1/pov.c.o lib/malloc.c.o lib/prng.c.o lib/crc32.c.o lib/libc.c.o lib/list.c.o src/adjectives.c.o src/nouns.c.o src/verbs.c.o src/service.c.o src/adverbs.c.o lib/malloc.c.o lib/prng.c.o lib/crc32.c.o lib/libc.c.o lib/list.c.o src/adjectives.c.o src/nouns.c.o src/verbs.c.o src/service.c.o src/adverbs.c.o EternalPass_pov_2 EternalPass_pov_1 EternalPass_patched EternalPass
