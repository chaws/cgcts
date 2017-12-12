CHAL=tribute

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/lib_funcs.c.o -c cb_3/lib/lib_funcs.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/libc.c.o -c cb_3/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/bin3.c.o -c cb_3/src/bin3.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/lib_funcs.c.o -c cb_2/lib/lib_funcs.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/libc.c.o -c cb_2/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/bin2.c.o -c cb_2/src/bin2.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/lib_funcs.c.o -c cb_1/lib/lib_funcs.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/libc.c.o -c cb_1/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/bin1.c.o -c cb_1/src/bin1.c
	$(CC) $(FLAGS) -o tribute_1_patched cb_1/lib/lib_funcs.c.o cb_1/lib/libc.c.o cb_1/src/bin1.c.o $(LCGC) 
	$(CC) $(FLAGS) -o tribute_3_patched cb_3/lib/lib_funcs.c.o cb_3/lib/libc.c.o cb_3/src/bin3.c.o $(LCGC) 
	$(CC) $(FLAGS) -o tribute_2_patched cb_2/lib/lib_funcs.c.o cb_2/lib/libc.c.o cb_2/src/bin2.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/lib_funcs.c.o -c cb_3/lib/lib_funcs.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/libc.c.o -c cb_3/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/bin3.c.o -c cb_3/src/bin3.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/lib_funcs.c.o -c cb_2/lib/lib_funcs.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/libc.c.o -c cb_2/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/bin2.c.o -c cb_2/src/bin2.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/lib_funcs.c.o -c cb_1/lib/lib_funcs.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/libc.c.o -c cb_1/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/bin1.c.o -c cb_1/src/bin1.c
	$(CC) $(FLAGS) -o tribute_1 cb_1/lib/lib_funcs.c.o cb_1/lib/libc.c.o cb_1/src/bin1.c.o $(LCGC) 
	$(CC) $(FLAGS) -o tribute_3 cb_3/lib/lib_funcs.c.o cb_3/lib/libc.c.o cb_3/src/bin3.c.o $(LCGC) 
	$(CC) $(FLAGS) -o tribute_2 cb_2/lib/lib_funcs.c.o cb_2/lib/libc.c.o cb_2/src/bin2.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(FLAGS) -o tribute_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f cb_3/lib/lib_funcs.c.o cb_3/lib/libc.c.o cb_3/src/bin3.c.o pov_1/pov.c.o cb_3/lib/lib_funcs.c.o cb_3/lib/libc.c.o cb_3/src/bin3.c.o cb_2/lib/lib_funcs.c.o cb_2/lib/libc.c.o cb_2/src/bin2.c.o cb_2/lib/lib_funcs.c.o cb_2/lib/libc.c.o cb_2/src/bin2.c.o cb_1/lib/lib_funcs.c.o cb_1/lib/libc.c.o cb_1/src/bin1.c.o cb_1/lib/lib_funcs.c.o cb_1/lib/libc.c.o cb_1/src/bin1.c.o tribute_3_patched tribute_pov_1 tribute_3 tribute_2_patched tribute_2 tribute_1_patched tribute_1
