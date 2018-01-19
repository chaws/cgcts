CHAL=Divelogger2

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/mymath.c.o -c lib/mymath.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/new_printf.c.o -c lib/new_printf.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o lib/string.cc.o -c lib/string.cc
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/commandhandler.cc.o -c src/commandhandler.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/dlqueue.cc.o -c src/dlqueue.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/datetime.cc.o -c src/datetime.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/common.cc.o -c src/common.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/datetime_helper.cc.o -c src/datetime_helper.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/dive.cc.o -c src/dive.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/service.cc.o -c src/service.cc
	$(CXX) $(FLAGS) -o Divelogger2_patched lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/string.cc.o lib/stdlib.c.o src/commandhandler.cc.o src/dlqueue.cc.o src/datetime.cc.o src/common.cc.o src/datetime_helper.cc.o src/dive.cc.o src/service.cc.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/mymath.c.o -c lib/mymath.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/new_printf.c.o -c lib/new_printf.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o lib/string.cc.o -c lib/string.cc
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/commandhandler.cc.o -c src/commandhandler.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/dlqueue.cc.o -c src/dlqueue.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/datetime.cc.o -c src/datetime.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/common.cc.o -c src/common.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/datetime_helper.cc.o -c src/datetime_helper.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/dive.cc.o -c src/dive.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/service.cc.o -c src/service.cc
	$(CXX) $(FLAGS) -o Divelogger2 lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/string.cc.o lib/stdlib.c.o src/commandhandler.cc.o src/dlqueue.cc.o src/datetime.cc.o src/common.cc.o src/datetime_helper.cc.o src/dive.cc.o src/service.cc.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -fno-exceptions -fno-rtti -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CXX) $(FLAGS) -o Divelogger2_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov.c.o lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/string.cc.o lib/stdlib.c.o src/commandhandler.cc.o src/dlqueue.cc.o src/datetime.cc.o src/common.cc.o src/datetime_helper.cc.o src/dive.cc.o src/service.cc.o lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/string.cc.o lib/stdlib.c.o src/commandhandler.cc.o src/dlqueue.cc.o src/datetime.cc.o src/common.cc.o src/datetime_helper.cc.o src/dive.cc.o src/service.cc.o Divelogger2_pov_1 Divelogger2_patched Divelogger2
