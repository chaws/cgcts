CHAL=Water_Treatment_Facility_Simulator

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mstack-alignment=3 -o lib/prng.c.o -c lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mstack-alignment=3 -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mstack-alignment=3 -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mstack-alignment=3 -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mstack-alignment=3 -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mstack-alignment=3 -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mstack-alignment=3 -o src/plant.c.o -c src/plant.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mstack-alignment=3 -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mstack-alignment=3 -o src/menu.c.o -c src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -mstack-alignment=3 -o src/sim.c.o -c src/sim.c
	$(CC) $(FLAGS) -o Water_Treatment_Facility_Simulator_patched lib/prng.c.o lib/ctype.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/plant.c.o src/service.c.o src/menu.c.o src/sim.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mstack-alignment=3 -o lib/prng.c.o -c lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mstack-alignment=3 -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mstack-alignment=3 -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mstack-alignment=3 -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mstack-alignment=3 -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mstack-alignment=3 -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mstack-alignment=3 -o src/plant.c.o -c src/plant.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mstack-alignment=3 -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mstack-alignment=3 -o src/menu.c.o -c src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -mstack-alignment=3 -o src/sim.c.o -c src/sim.c
	$(CC) $(FLAGS) -o Water_Treatment_Facility_Simulator lib/prng.c.o lib/ctype.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/plant.c.o src/service.c.o src/menu.c.o src/sim.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -mstack-alignment=3 -pedantic -o pov_1/service.c.o -c pov_1/service.c
	$(CC) $(FLAGS) -o Water_Treatment_Facility_Simulator_pov_1 pov_1/service.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/service.c.o lib/prng.c.o lib/ctype.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/plant.c.o src/service.c.o src/menu.c.o src/sim.c.o lib/prng.c.o lib/ctype.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/plant.c.o src/service.c.o src/menu.c.o src/sim.c.o Water_Treatment_Facility_Simulator_pov_1 Water_Treatment_Facility_Simulator_patched Water_Treatment_Facility_Simulator
