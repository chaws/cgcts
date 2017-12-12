CHAL=Stock_Exchange_Simulator

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/account.c.o -c src/account.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/hashtime.c.o -c src/hashtime.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/option.c.o -c src/option.c
	$(CC) $(FLAGS) -o Stock_Exchange_Simulator_patched lib/libc.c.o src/account.c.o src/hashtime.c.o src/service.c.o src/option.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/account.c.o -c src/account.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/hashtime.c.o -c src/hashtime.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/option.c.o -c src/option.c
	$(CC) $(FLAGS) -o Stock_Exchange_Simulator lib/libc.c.o src/account.c.o src/hashtime.c.o src/service.c.o src/option.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(FLAGS) -o Stock_Exchange_Simulator_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov.c.o lib/libc.c.o src/account.c.o src/hashtime.c.o src/service.c.o src/option.c.o lib/libc.c.o src/account.c.o src/hashtime.c.o src/service.c.o src/option.c.o Stock_Exchange_Simulator_pov_1 Stock_Exchange_Simulator_patched Stock_Exchange_Simulator
