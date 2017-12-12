CHAL=COLLIDEOSCOPE

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o src/parser.c.o -c src/parser.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o src/interpreter.c.o -c src/interpreter.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o src/prettyprinter.c.o -c src/prettyprinter.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o src/tokenizer.c.o -c src/tokenizer.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O3 -o src/namespace.c.o -c src/namespace.c
	$(CC) $(FLAGS) -o COLLIDEOSCOPE_patched lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/parser.c.o src/interpreter.c.o src/prettyprinter.c.o src/service.c.o src/tokenizer.c.o src/namespace.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o lib/pool.c.o -c lib/pool.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o lib/conv.c.o -c lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o lib/bitset.c.o -c lib/bitset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o src/parser.c.o -c src/parser.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o src/interpreter.c.o -c src/interpreter.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o src/prettyprinter.c.o -c src/prettyprinter.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o src/tokenizer.c.o -c src/tokenizer.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -o src/namespace.c.o -c src/namespace.c
	$(CC) $(FLAGS) -o COLLIDEOSCOPE lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/parser.c.o src/interpreter.c.o src/prettyprinter.c.o src/service.c.o src/tokenizer.c.o src/namespace.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O3 -pedantic -O0 -o pov_2/pool.c.o -c pov_2/pool.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O3 -pedantic -O0 -o pov_2/conv.c.o -c pov_2/conv.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O3 -pedantic -O0 -o pov_2/math.c.o -c pov_2/math.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O3 -pedantic -O0 -o pov_2/stdlib.c.o -c pov_2/stdlib.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O3 -pedantic -O0 -o pov_2/stdio.c.o -c pov_2/stdio.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O3 -pedantic -O0 -o pov_2/string.c.o -c pov_2/string.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O3 -pedantic -O0 -o pov_2/bitset.c.o -c pov_2/bitset.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O3 -pedantic -O0 -o pov_2/pov_2.c.o -c pov_2/pov_2.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O3 -pedantic -O0 -o pov_1/pool.c.o -c pov_1/pool.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O3 -pedantic -O0 -o pov_1/conv.c.o -c pov_1/conv.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O3 -pedantic -O0 -o pov_1/pov_1.c.o -c pov_1/pov_1.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O3 -pedantic -O0 -o pov_1/math.c.o -c pov_1/math.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O3 -pedantic -O0 -o pov_1/stdlib.c.o -c pov_1/stdlib.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O3 -pedantic -O0 -o pov_1/stdio.c.o -c pov_1/stdio.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O3 -pedantic -O0 -o pov_1/string.c.o -c pov_1/string.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O3 -pedantic -O0 -o pov_1/bitset.c.o -c pov_1/bitset.c
	$(CC) $(FLAGS) -o COLLIDEOSCOPE_pov_2 pov_2/pool.c.o pov_2/conv.c.o pov_2/math.c.o pov_2/stdlib.c.o pov_2/stdio.c.o pov_2/string.c.o pov_2/bitset.c.o pov_2/pov_2.c.o $(LPOV) 
	$(CC) $(FLAGS) -o COLLIDEOSCOPE_pov_1 pov_1/pool.c.o pov_1/conv.c.o pov_1/pov_1.c.o pov_1/math.c.o pov_1/stdlib.c.o pov_1/stdio.c.o pov_1/string.c.o pov_1/bitset.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pool.c.o pov_2/conv.c.o pov_2/math.c.o pov_2/stdlib.c.o pov_2/stdio.c.o pov_2/string.c.o pov_2/bitset.c.o pov_2/pov_2.c.o pov_1/pool.c.o pov_1/conv.c.o pov_1/pov_1.c.o pov_1/math.c.o pov_1/stdlib.c.o pov_1/stdio.c.o pov_1/string.c.o pov_1/bitset.c.o lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/parser.c.o src/interpreter.c.o src/prettyprinter.c.o src/service.c.o src/tokenizer.c.o src/namespace.c.o lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/parser.c.o src/interpreter.c.o src/prettyprinter.c.o src/service.c.o src/tokenizer.c.o src/namespace.c.o COLLIDEOSCOPE_pov_2 COLLIDEOSCOPE_pov_1 COLLIDEOSCOPE_patched COLLIDEOSCOPE
