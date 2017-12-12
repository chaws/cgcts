CHAL=ECM_TCM_Simulator

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
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/ecm.cc.o -c src/ecm.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/common.cc.o -c src/common.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/tcm.cc.o -c src/tcm.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/response.cc.o -c src/response.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/lanbus.cc.o -c src/lanbus.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/service.cc.o -c src/service.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/simulation.cc.o -c src/simulation.cc
	$(CC) $(FLAGS) -o ECM_TCM_Simulator_patched lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/cutil_string.cc.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/ecm.cc.o src/common.cc.o src/tcm.cc.o src/response.cc.o src/lanbus.cc.o src/service.cc.o src/simulation.cc.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/prng.c.o -c lib/prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/ctype.c.o -c lib/ctype.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o lib/cutil_string.cc.o -c lib/cutil_string.cc
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/string.c.o -c lib/string.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/ecm.cc.o -c src/ecm.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/common.cc.o -c src/common.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/tcm.cc.o -c src/tcm.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/response.cc.o -c src/response.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/lanbus.cc.o -c src/lanbus.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/service.cc.o -c src/service.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/simulation.cc.o -c src/simulation.cc
	$(CC) $(FLAGS) -o ECM_TCM_Simulator lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/cutil_string.cc.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/ecm.cc.o src/common.cc.o src/tcm.cc.o src/response.cc.o src/lanbus.cc.o src/service.cc.o src/simulation.cc.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -fno-exceptions -fno-rtti -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(FLAGS) -o ECM_TCM_Simulator_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov.c.o lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/cutil_string.cc.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/ecm.cc.o src/common.cc.o src/tcm.cc.o src/response.cc.o src/lanbus.cc.o src/service.cc.o src/simulation.cc.o lib/malloc.c.o lib/prng.c.o lib/ctype.c.o lib/cutil_string.cc.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/ecm.cc.o src/common.cc.o src/tcm.cc.o src/response.cc.o src/lanbus.cc.o src/service.cc.o src/simulation.cc.o ECM_TCM_Simulator_pov_1 ECM_TCM_Simulator_patched ECM_TCM_Simulator
