CHAL=Pipelined

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/printf.c.o -c cb_1/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/cgc_libc.c.o -c cb_1/lib/cgc_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/cgc_malloc.c.o -c cb_1/lib/cgc_malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/service.c.o -c cb_1/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/printf.c.o -c cb_2/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/cgc_libc.c.o -c cb_2/lib/cgc_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/cgc_malloc.c.o -c cb_2/lib/cgc_malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/contains.c.o -c cb_2/src/contains.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/printf.c.o -c cb_3/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/cgc_libc.c.o -c cb_3/lib/cgc_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/cgc_malloc.c.o -c cb_3/lib/cgc_malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/word-count.c.o -c cb_3/src/word-count.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_6/lib -I cb_6/src -I cb_6/include -O0 -g -o cb_6/lib/printf.c.o -c cb_6/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_6/lib -I cb_6/src -I cb_6/include -O0 -g -o cb_6/lib/cgc_libc.c.o -c cb_6/lib/cgc_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_6/lib -I cb_6/src -I cb_6/include -O0 -g -o cb_6/lib/cgc_malloc.c.o -c cb_6/lib/cgc_malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_6/lib -I cb_6/src -I cb_6/include -O0 -g -o cb_6/src/decompress.c.o -c cb_6/src/decompress.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/printf.c.o -c cb_4/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/cgc_libc.c.o -c cb_4/lib/cgc_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/cgc_malloc.c.o -c cb_4/lib/cgc_malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/src/does-not-contain.c.o -c cb_4/src/does-not-contain.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_5/lib -I cb_5/src -I cb_5/include -O0 -g -o cb_5/lib/printf.c.o -c cb_5/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_5/lib -I cb_5/src -I cb_5/include -O0 -g -o cb_5/lib/cgc_libc.c.o -c cb_5/lib/cgc_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_5/lib -I cb_5/src -I cb_5/include -O0 -g -o cb_5/lib/cgc_malloc.c.o -c cb_5/lib/cgc_malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_5/lib -I cb_5/src -I cb_5/include -O0 -g -o cb_5/src/compress.c.o -c cb_5/src/compress.c
	$(CC) $(FLAGS) -o Pipelined_4_patched cb_4/lib/printf.c.o cb_4/lib/cgc_libc.c.o cb_4/lib/cgc_malloc.c.o cb_4/src/does-not-contain.c.o $(LCGC) 
	$(CC) $(FLAGS) -o Pipelined_1_patched cb_1/lib/printf.c.o cb_1/lib/cgc_libc.c.o cb_1/lib/cgc_malloc.c.o cb_1/src/service.c.o $(LCGC) 
	$(CC) $(FLAGS) -o Pipelined_3_patched cb_3/lib/printf.c.o cb_3/lib/cgc_libc.c.o cb_3/lib/cgc_malloc.c.o cb_3/src/word-count.c.o $(LCGC) 
	$(CC) $(FLAGS) -o Pipelined_5_patched cb_5/lib/printf.c.o cb_5/lib/cgc_libc.c.o cb_5/lib/cgc_malloc.c.o cb_5/src/compress.c.o $(LCGC) 
	$(CC) $(FLAGS) -o Pipelined_2_patched cb_2/lib/printf.c.o cb_2/lib/cgc_libc.c.o cb_2/lib/cgc_malloc.c.o cb_2/src/contains.c.o $(LCGC) 
	$(CC) $(FLAGS) -o Pipelined_6_patched cb_6/lib/printf.c.o cb_6/lib/cgc_libc.c.o cb_6/lib/cgc_malloc.c.o cb_6/src/decompress.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -O0 -g -o cb_6/lib/printf.c.o -c cb_6/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -O0 -g -o cb_6/lib/cgc_libc.c.o -c cb_6/lib/cgc_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -O0 -g -o cb_6/lib/cgc_malloc.c.o -c cb_6/lib/cgc_malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -O0 -g -o cb_6/src/decompress.c.o -c cb_6/src/decompress.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/printf.c.o -c cb_1/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/cgc_libc.c.o -c cb_1/lib/cgc_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/cgc_malloc.c.o -c cb_1/lib/cgc_malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/service.c.o -c cb_1/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/printf.c.o -c cb_3/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/cgc_libc.c.o -c cb_3/lib/cgc_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/cgc_malloc.c.o -c cb_3/lib/cgc_malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/word-count.c.o -c cb_3/src/word-count.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/printf.c.o -c cb_4/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/cgc_libc.c.o -c cb_4/lib/cgc_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/cgc_malloc.c.o -c cb_4/lib/cgc_malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/src/does-not-contain.c.o -c cb_4/src/does-not-contain.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/printf.c.o -c cb_2/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/cgc_libc.c.o -c cb_2/lib/cgc_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/cgc_malloc.c.o -c cb_2/lib/cgc_malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/contains.c.o -c cb_2/src/contains.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -O0 -g -o cb_5/lib/printf.c.o -c cb_5/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -O0 -g -o cb_5/lib/cgc_libc.c.o -c cb_5/lib/cgc_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -O0 -g -o cb_5/lib/cgc_malloc.c.o -c cb_5/lib/cgc_malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -O0 -g -o cb_5/src/compress.c.o -c cb_5/src/compress.c
	$(CC) $(FLAGS) -o Pipelined_1 cb_1/lib/printf.c.o cb_1/lib/cgc_libc.c.o cb_1/lib/cgc_malloc.c.o cb_1/src/service.c.o $(LCGC) 
	$(CC) $(FLAGS) -o Pipelined_2 cb_2/lib/printf.c.o cb_2/lib/cgc_libc.c.o cb_2/lib/cgc_malloc.c.o cb_2/src/contains.c.o $(LCGC) 
	$(CC) $(FLAGS) -o Pipelined_3 cb_3/lib/printf.c.o cb_3/lib/cgc_libc.c.o cb_3/lib/cgc_malloc.c.o cb_3/src/word-count.c.o $(LCGC) 
	$(CC) $(FLAGS) -o Pipelined_4 cb_4/lib/printf.c.o cb_4/lib/cgc_libc.c.o cb_4/lib/cgc_malloc.c.o cb_4/src/does-not-contain.c.o $(LCGC) 
	$(CC) $(FLAGS) -o Pipelined_5 cb_5/lib/printf.c.o cb_5/lib/cgc_libc.c.o cb_5/lib/cgc_malloc.c.o cb_5/src/compress.c.o $(LCGC) 
	$(CC) $(FLAGS) -o Pipelined_6 cb_6/lib/printf.c.o cb_6/lib/cgc_libc.c.o cb_6/lib/cgc_malloc.c.o cb_6/src/decompress.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(FLAGS) -o Pipelined_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov.c.o cb_6/lib/printf.c.o cb_6/lib/cgc_libc.c.o cb_6/lib/cgc_malloc.c.o cb_6/src/decompress.c.o cb_1/lib/printf.c.o cb_1/lib/cgc_libc.c.o cb_1/lib/cgc_malloc.c.o cb_1/src/service.c.o cb_3/lib/printf.c.o cb_3/lib/cgc_libc.c.o cb_3/lib/cgc_malloc.c.o cb_3/src/word-count.c.o cb_4/lib/printf.c.o cb_4/lib/cgc_libc.c.o cb_4/lib/cgc_malloc.c.o cb_4/src/does-not-contain.c.o cb_1/lib/printf.c.o cb_1/lib/cgc_libc.c.o cb_1/lib/cgc_malloc.c.o cb_1/src/service.c.o cb_2/lib/printf.c.o cb_2/lib/cgc_libc.c.o cb_2/lib/cgc_malloc.c.o cb_2/src/contains.c.o cb_3/lib/printf.c.o cb_3/lib/cgc_libc.c.o cb_3/lib/cgc_malloc.c.o cb_3/src/word-count.c.o cb_2/lib/printf.c.o cb_2/lib/cgc_libc.c.o cb_2/lib/cgc_malloc.c.o cb_2/src/contains.c.o cb_6/lib/printf.c.o cb_6/lib/cgc_libc.c.o cb_6/lib/cgc_malloc.c.o cb_6/src/decompress.c.o cb_4/lib/printf.c.o cb_4/lib/cgc_libc.c.o cb_4/lib/cgc_malloc.c.o cb_4/src/does-not-contain.c.o cb_5/lib/printf.c.o cb_5/lib/cgc_libc.c.o cb_5/lib/cgc_malloc.c.o cb_5/src/compress.c.o cb_5/lib/printf.c.o cb_5/lib/cgc_libc.c.o cb_5/lib/cgc_malloc.c.o cb_5/src/compress.c.o Pipelined_pov_1 Pipelined_6 Pipelined_1 Pipelined_3 Pipelined_4 Pipelined_1_patched Pipelined_2_patched Pipelined_3_patched Pipelined_2 Pipelined_6_patched Pipelined_4_patched Pipelined_5 Pipelined_5_patched
