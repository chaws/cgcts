CHAL=LAN_Simulator

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/malloc.c.o -c cb_3/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/prng.c.o -c cb_3/lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/ctype.c.o -c cb_3/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/fs.c.o -c cb_3/lib/fs.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/math.c.o -c cb_3/lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/stdlib.c.o -c cb_3/lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/stdio.c.o -c cb_3/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/string.c.o -c cb_3/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/common.c.o -c cb_3/src/common.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/L3.c.o -c cb_3/src/L3.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/L2.c.o -c cb_3/src/L2.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/server.c.o -c cb_3/src/server.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/L4.c.o -c cb_3/src/L4.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/handlers.c.o -c cb_3/src/handlers.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/prng.c.o -c cb_2/lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/ctype.c.o -c cb_2/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/fs.c.o -c cb_2/lib/fs.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/math.c.o -c cb_2/lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/stdlib.c.o -c cb_2/lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/stdio.c.o -c cb_2/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/string.c.o -c cb_2/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/common.c.o -c cb_2/src/common.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/L3.c.o -c cb_2/src/L3.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/L2.c.o -c cb_2/src/L2.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/router.c.o -c cb_2/src/router.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/prng.c.o -c cb_1/lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/ctype.c.o -c cb_1/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/fs.c.o -c cb_1/lib/fs.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/math.c.o -c cb_1/lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/stdlib.c.o -c cb_1/lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/stdio.c.o -c cb_1/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/string.c.o -c cb_1/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/common.c.o -c cb_1/src/common.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/L2.c.o -c cb_1/src/L2.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/switch.c.o -c cb_1/src/switch.c
	$(CXX) $(FLAGS) -o LAN_Simulator_1_patched cb_1/lib/malloc.c.o cb_1/lib/prng.c.o cb_1/lib/ctype.c.o cb_1/lib/fs.c.o cb_1/lib/math.c.o cb_1/lib/stdlib.c.o cb_1/lib/stdio.c.o cb_1/lib/string.c.o cb_1/src/common.c.o cb_1/src/L2.c.o cb_1/src/switch.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o LAN_Simulator_2_patched cb_2/lib/malloc.c.o cb_2/lib/prng.c.o cb_2/lib/ctype.c.o cb_2/lib/fs.c.o cb_2/lib/math.c.o cb_2/lib/stdlib.c.o cb_2/lib/stdio.c.o cb_2/lib/string.c.o cb_2/src/common.c.o cb_2/src/L3.c.o cb_2/src/L2.c.o cb_2/src/router.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o LAN_Simulator_3_patched cb_3/lib/malloc.c.o cb_3/lib/prng.c.o cb_3/lib/ctype.c.o cb_3/lib/fs.c.o cb_3/lib/math.c.o cb_3/lib/stdlib.c.o cb_3/lib/stdio.c.o cb_3/lib/string.c.o cb_3/src/common.c.o cb_3/src/L3.c.o cb_3/src/L2.c.o cb_3/src/server.c.o cb_3/src/L4.c.o cb_3/src/handlers.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/malloc.c.o -c cb_3/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/prng.c.o -c cb_3/lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/ctype.c.o -c cb_3/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/fs.c.o -c cb_3/lib/fs.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/math.c.o -c cb_3/lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/stdlib.c.o -c cb_3/lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/stdio.c.o -c cb_3/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/string.c.o -c cb_3/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/common.c.o -c cb_3/src/common.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/L3.c.o -c cb_3/src/L3.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/L2.c.o -c cb_3/src/L2.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/server.c.o -c cb_3/src/server.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/L4.c.o -c cb_3/src/L4.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/handlers.c.o -c cb_3/src/handlers.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/prng.c.o -c cb_2/lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/ctype.c.o -c cb_2/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/fs.c.o -c cb_2/lib/fs.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/math.c.o -c cb_2/lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/stdlib.c.o -c cb_2/lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/stdio.c.o -c cb_2/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/string.c.o -c cb_2/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/common.c.o -c cb_2/src/common.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/L3.c.o -c cb_2/src/L3.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/L2.c.o -c cb_2/src/L2.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/router.c.o -c cb_2/src/router.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/prng.c.o -c cb_1/lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/ctype.c.o -c cb_1/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/fs.c.o -c cb_1/lib/fs.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/math.c.o -c cb_1/lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/stdlib.c.o -c cb_1/lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/stdio.c.o -c cb_1/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/string.c.o -c cb_1/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/common.c.o -c cb_1/src/common.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/L2.c.o -c cb_1/src/L2.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/switch.c.o -c cb_1/src/switch.c
	$(CXX) $(FLAGS) -o LAN_Simulator_1 cb_1/lib/malloc.c.o cb_1/lib/prng.c.o cb_1/lib/ctype.c.o cb_1/lib/fs.c.o cb_1/lib/math.c.o cb_1/lib/stdlib.c.o cb_1/lib/stdio.c.o cb_1/lib/string.c.o cb_1/src/common.c.o cb_1/src/L2.c.o cb_1/src/switch.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o LAN_Simulator_2 cb_2/lib/malloc.c.o cb_2/lib/prng.c.o cb_2/lib/ctype.c.o cb_2/lib/fs.c.o cb_2/lib/math.c.o cb_2/lib/stdlib.c.o cb_2/lib/stdio.c.o cb_2/lib/string.c.o cb_2/src/common.c.o cb_2/src/L3.c.o cb_2/src/L2.c.o cb_2/src/router.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o LAN_Simulator_3 cb_3/lib/malloc.c.o cb_3/lib/prng.c.o cb_3/lib/ctype.c.o cb_3/lib/fs.c.o cb_3/lib/math.c.o cb_3/lib/stdlib.c.o cb_3/lib/stdio.c.o cb_3/lib/string.c.o cb_3/src/common.c.o cb_3/src/L3.c.o cb_3/src/L2.c.o cb_3/src/server.c.o cb_3/src/L4.c.o cb_3/src/handlers.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -pedantic -o pov_2/service.c.o -c pov_2/service.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/service.c.o -c pov_1/service.c
	$(CXX) $(FLAGS) -o LAN_Simulator_pov_2 pov_2/service.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o LAN_Simulator_pov_1 pov_1/service.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/service.c.o pov_1/service.c.o cb_3/lib/malloc.c.o cb_3/lib/prng.c.o cb_3/lib/ctype.c.o cb_3/lib/fs.c.o cb_3/lib/math.c.o cb_3/lib/stdlib.c.o cb_3/lib/stdio.c.o cb_3/lib/string.c.o cb_3/src/common.c.o cb_3/src/L3.c.o cb_3/src/L2.c.o cb_3/src/server.c.o cb_3/src/L4.c.o cb_3/src/handlers.c.o cb_3/lib/malloc.c.o cb_3/lib/prng.c.o cb_3/lib/ctype.c.o cb_3/lib/fs.c.o cb_3/lib/math.c.o cb_3/lib/stdlib.c.o cb_3/lib/stdio.c.o cb_3/lib/string.c.o cb_3/src/common.c.o cb_3/src/L3.c.o cb_3/src/L2.c.o cb_3/src/server.c.o cb_3/src/L4.c.o cb_3/src/handlers.c.o cb_2/lib/malloc.c.o cb_2/lib/prng.c.o cb_2/lib/ctype.c.o cb_2/lib/fs.c.o cb_2/lib/math.c.o cb_2/lib/stdlib.c.o cb_2/lib/stdio.c.o cb_2/lib/string.c.o cb_2/src/common.c.o cb_2/src/L3.c.o cb_2/src/L2.c.o cb_2/src/router.c.o cb_2/lib/malloc.c.o cb_2/lib/prng.c.o cb_2/lib/ctype.c.o cb_2/lib/fs.c.o cb_2/lib/math.c.o cb_2/lib/stdlib.c.o cb_2/lib/stdio.c.o cb_2/lib/string.c.o cb_2/src/common.c.o cb_2/src/L3.c.o cb_2/src/L2.c.o cb_2/src/router.c.o cb_1/lib/malloc.c.o cb_1/lib/prng.c.o cb_1/lib/ctype.c.o cb_1/lib/fs.c.o cb_1/lib/math.c.o cb_1/lib/stdlib.c.o cb_1/lib/stdio.c.o cb_1/lib/string.c.o cb_1/src/common.c.o cb_1/src/L2.c.o cb_1/src/switch.c.o cb_1/lib/malloc.c.o cb_1/lib/prng.c.o cb_1/lib/ctype.c.o cb_1/lib/fs.c.o cb_1/lib/math.c.o cb_1/lib/stdlib.c.o cb_1/lib/stdio.c.o cb_1/lib/string.c.o cb_1/src/common.c.o cb_1/src/L2.c.o cb_1/src/switch.c.o LAN_Simulator_pov_2 LAN_Simulator_pov_1 LAN_Simulator_3 LAN_Simulator_3_patched LAN_Simulator_2_patched LAN_Simulator_2 LAN_Simulator_1_patched LAN_Simulator_1
