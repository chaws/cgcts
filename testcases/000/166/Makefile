CHAL=electronictrading

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/pool.c.o -c lib/pool.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/stock.c.o -c src/stock.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CXX) $(FLAGS) -o electronictrading_patched lib/pool.c.o lib/libc.c.o src/stock.c.o src/service.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/pool.c.o -c lib/pool.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/stock.c.o -c src/stock.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CXX) $(FLAGS) -o electronictrading lib/pool.c.o lib/libc.c.o src/stock.c.o src/service.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_4 -I include -I lib -I src -O0 -g -pedantic -o pov_4/pov.c.o -c pov_4/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_5 -I include -I lib -I src -O0 -g -pedantic -o pov_5/pov.c.o -c pov_5/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -O0 -g -pedantic -o pov_3/pov.c.o -c pov_3/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CXX) $(FLAGS) -o electronictrading_pov_1 pov_1/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o electronictrading_pov_3 pov_3/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o electronictrading_pov_2 pov_2/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o electronictrading_pov_5 pov_5/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o electronictrading_pov_4 pov_4/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_4/pov.c.o pov_1/pov.c.o pov_5/pov.c.o lib/pool.c.o lib/libc.c.o src/stock.c.o src/service.c.o pov_3/pov.c.o pov_2/pov.c.o lib/pool.c.o lib/libc.c.o src/stock.c.o src/service.c.o electronictrading_pov_4 electronictrading_pov_1 electronictrading_pov_5 electronictrading_patched electronictrading_pov_3 electronictrading_pov_2 electronictrading
