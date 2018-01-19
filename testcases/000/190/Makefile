CHAL=WhackJack

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/prng.c.o -c lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/input.c.o -c lib/input.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o src/playround.c.o -c src/playround.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o src/player.c.o -c src/player.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o src/algorithms.c.o -c src/algorithms.c
	$(CXX) $(FLAGS) -o WhackJack_patched lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/input.c.o src/playround.c.o src/service.c.o src/player.c.o src/algorithms.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/prng.c.o -c lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o lib/input.c.o -c lib/input.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o src/playround.c.o -c src/playround.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o src/player.c.o -c src/player.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -DENABLE_BUFFERED_PRINTF -o src/algorithms.c.o -c src/algorithms.c
	$(CXX) $(FLAGS) -o WhackJack lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/input.c.o src/playround.c.o src/service.c.o src/player.c.o src/algorithms.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -DENABLE_BUFFERED_PRINTF -pedantic -o pov_1/pov1.c.o -c pov_1/pov1.c
	$(CXX) $(FLAGS) -o WhackJack_pov_1 pov_1/pov1.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov1.c.o lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/input.c.o src/playround.c.o src/service.c.o src/player.c.o src/algorithms.c.o lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/input.c.o src/playround.c.o src/service.c.o src/player.c.o src/algorithms.c.o WhackJack_pov_1 WhackJack_patched WhackJack
