CHAL=Virtual_Machine

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
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o lib/cutil_string.cc.o -c lib/cutil_string.cc
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/string.c.o -c lib/string.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/peripheral.cc.o -c src/peripheral.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/common.cc.o -c src/common.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/clf.cc.o -c src/clf.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/mmu.cc.o -c src/mmu.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/vm.cc.o -c src/vm.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/cpu.cc.o -c src/cpu.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/dma.cc.o -c src/dma.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/service.cc.o -c src/service.cc
	$(CC) $(FLAGS) -o Virtual_Machine_patched lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/cutil_string.cc.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/peripheral.cc.o src/common.cc.o src/clf.cc.o src/mmu.cc.o src/vm.cc.o src/cpu.cc.o src/dma.cc.o src/service.cc.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/prng.c.o -c lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/ctype.c.o -c lib/ctype.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o lib/cutil_string.cc.o -c lib/cutil_string.cc
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/string.c.o -c lib/string.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/peripheral.cc.o -c src/peripheral.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/common.cc.o -c src/common.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/clf.cc.o -c src/clf.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/mmu.cc.o -c src/mmu.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/vm.cc.o -c src/vm.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/cpu.cc.o -c src/cpu.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/dma.cc.o -c src/dma.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/service.cc.o -c src/service.cc
	$(CC) $(FLAGS) -o Virtual_Machine lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/cutil_string.cc.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/peripheral.cc.o src/common.cc.o src/clf.cc.o src/mmu.cc.o src/vm.cc.o src/cpu.cc.o src/dma.cc.o src/service.cc.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -fno-exceptions -fno-rtti -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(FLAGS) -o Virtual_Machine_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov.c.o lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/cutil_string.cc.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/peripheral.cc.o src/common.cc.o src/clf.cc.o src/mmu.cc.o src/vm.cc.o src/cpu.cc.o src/dma.cc.o src/service.cc.o lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/cutil_string.cc.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/peripheral.cc.o src/common.cc.o src/clf.cc.o src/mmu.cc.o src/vm.cc.o src/cpu.cc.o src/dma.cc.o src/service.cc.o Virtual_Machine_pov_1 Virtual_Machine_patched Virtual_Machine
