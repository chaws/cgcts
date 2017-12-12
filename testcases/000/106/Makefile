CHAL=Thermal_Controller_v3

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/prng.c.o -c lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/fs.c.o -c lib/fs.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/input.c.o -c lib/input.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o src/ui.c.o -c src/ui.c
	$(CC) $(FLAGS) -o Thermal_Controller_v3_patched lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/fs.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/input.c.o src/service.c.o src/ui.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/prng.c.o -c lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/fs.c.o -c lib/fs.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/input.c.o -c lib/input.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o src/ui.c.o -c src/ui.c
	$(CC) $(FLAGS) -o Thermal_Controller_v3 lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/fs.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/input.c.o src/service.c.o src/ui.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -fno-exceptions -fno-rtti -O0 -g -pedantic -o pov_1/pov1.c.o -c pov_1/pov1.c
	$(CC) $(FLAGS) -o Thermal_Controller_v3_pov_1 pov_1/pov1.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov1.c.o lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/fs.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/input.c.o src/service.c.o src/ui.c.o lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/fs.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/input.c.o src/service.c.o src/ui.c.o Thermal_Controller_v3_pov_1 Thermal_Controller_v3_patched Thermal_Controller_v3
