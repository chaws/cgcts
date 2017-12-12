CHAL=PTaaS

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o lib/image.c.o -c lib/image.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o lib/ray.c.o -c lib/ray.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o lib/vector.c.o -c lib/vector.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o lib/pool.c.o -c lib/pool.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o lib/conv.c.o -c lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o lib/bitset.c.o -c lib/bitset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o src/trunc.c.o -c src/trunc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o src/shape.c.o -c src/shape.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o src/pathtrace.c.o -c src/pathtrace.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o src/sphere.c.o -c src/sphere.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mno-sse -o src/plane.c.o -c src/plane.c
	$(CC) $(FLAGS) -o PTaaS_patched lib/image.c.o lib/ray.c.o lib/vector.c.o lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/trunc.c.o src/shape.c.o src/pathtrace.c.o src/sphere.c.o src/service.c.o src/plane.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o lib/image.c.o -c lib/image.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o lib/ray.c.o -c lib/ray.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o lib/vector.c.o -c lib/vector.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o lib/pool.c.o -c lib/pool.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o lib/conv.c.o -c lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o lib/bitset.c.o -c lib/bitset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o src/trunc.c.o -c src/trunc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o src/shape.c.o -c src/shape.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o src/pathtrace.c.o -c src/pathtrace.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o src/sphere.c.o -c src/sphere.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mno-sse -o src/plane.c.o -c src/plane.c
	$(CC) $(FLAGS) -o PTaaS lib/image.c.o lib/ray.c.o lib/vector.c.o lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/trunc.c.o src/shape.c.o src/pathtrace.c.o src/sphere.c.o src/service.c.o src/plane.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -mno-sse -pedantic -o pov_1/conv.c.o -c pov_1/conv.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -mno-sse -pedantic -o pov_1/pov_1.c.o -c pov_1/pov_1.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -mno-sse -pedantic -o pov_1/math.c.o -c pov_1/math.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -mno-sse -pedantic -o pov_1/stdlib.c.o -c pov_1/stdlib.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -mno-sse -pedantic -o pov_1/string.c.o -c pov_1/string.c
	$(CC) $(FLAGS) -o PTaaS_pov_1 pov_1/conv.c.o pov_1/pov_1.c.o pov_1/math.c.o pov_1/stdlib.c.o pov_1/string.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f lib/image.c.o lib/ray.c.o lib/vector.c.o lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/trunc.c.o src/shape.c.o src/pathtrace.c.o src/sphere.c.o src/service.c.o src/plane.c.o pov_1/conv.c.o pov_1/pov_1.c.o pov_1/math.c.o pov_1/stdlib.c.o pov_1/string.c.o lib/image.c.o lib/ray.c.o lib/vector.c.o lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/trunc.c.o src/shape.c.o src/pathtrace.c.o src/sphere.c.o src/service.c.o src/plane.c.o PTaaS_patched PTaaS_pov_1 PTaaS
