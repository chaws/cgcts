CHAL=Matchmaker

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o lib/pool.c.o -c lib/pool.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o lib/conv.c.o -c lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o lib/bitset.c.o -c lib/bitset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o src/dfa.c.o -c src/dfa.c
	$(CC) $(FLAGS) -o Matchmaker_patched lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/service.c.o src/dfa.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o lib/pool.c.o -c lib/pool.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o lib/conv.c.o -c lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o lib/bitset.c.o -c lib/bitset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o src/dfa.c.o -c src/dfa.c
	$(CC) $(FLAGS) -o Matchmaker lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/service.c.o src/dfa.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O3 -pedantic -O0 -o pov_2/pov_2.c.o -c pov_2/pov_2.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O3 -pedantic -O0 -o pov_1/pov_1.c.o -c pov_1/pov_1.c
	$(CC) $(FLAGS) -o Matchmaker_pov_2 pov_2/pov_2.c.o $(LPOV) 
	$(CC) $(FLAGS) -o Matchmaker_pov_1 pov_1/pov_1.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov_2.c.o pov_1/pov_1.c.o lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/service.c.o src/dfa.c.o lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/service.c.o src/dfa.c.o Matchmaker_pov_2 Matchmaker_pov_1 Matchmaker_patched Matchmaker
