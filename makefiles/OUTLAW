CHAL=OUTLAW

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/send_bytes.c.o -c cb_3/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/recv_bytes.c.o -c cb_3/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/memcpy.c.o -c cb_3/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/conv.c.o -c cb_3/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/debug.c.o -c cb_3/lib/debug.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/compress.c.o -c cb_3/lib/compress.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/string.c.o -c cb_3/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/memset.c.o -c cb_3/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/crypto.c.o -c cb_3/lib/crypto.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/service.c.o -c cb_3/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/send_bytes.c.o -c cb_2/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/recv_bytes.c.o -c cb_2/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/memcpy.c.o -c cb_2/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/conv.c.o -c cb_2/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/debug.c.o -c cb_2/lib/debug.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/compress.c.o -c cb_2/lib/compress.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/string.c.o -c cb_2/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/memset.c.o -c cb_2/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/crypto.c.o -c cb_2/lib/crypto.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/service.c.o -c cb_2/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/send_bytes.c.o -c cb_1/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/recv_bytes.c.o -c cb_1/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/memcpy.c.o -c cb_1/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/conv.c.o -c cb_1/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/debug.c.o -c cb_1/lib/debug.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/compress.c.o -c cb_1/lib/compress.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/string.c.o -c cb_1/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/memset.c.o -c cb_1/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/crypto.c.o -c cb_1/lib/crypto.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/service.c.o -c cb_1/src/service.c
	$(CC) $(FLAGS) -o OUTLAW_1_patched cb_1/lib/send_bytes.c.o cb_1/lib/recv_bytes.c.o cb_1/lib/memcpy.c.o cb_1/lib/conv.c.o cb_1/lib/debug.c.o cb_1/lib/compress.c.o cb_1/lib/string.c.o cb_1/lib/memset.c.o cb_1/lib/crypto.c.o cb_1/src/service.c.o $(LCGC) 
	$(CC) $(FLAGS) -o OUTLAW_3_patched cb_3/lib/send_bytes.c.o cb_3/lib/recv_bytes.c.o cb_3/lib/memcpy.c.o cb_3/lib/conv.c.o cb_3/lib/debug.c.o cb_3/lib/compress.c.o cb_3/lib/string.c.o cb_3/lib/memset.c.o cb_3/lib/crypto.c.o cb_3/src/service.c.o $(LCGC) 
	$(CC) $(FLAGS) -o OUTLAW_2_patched cb_2/lib/send_bytes.c.o cb_2/lib/recv_bytes.c.o cb_2/lib/memcpy.c.o cb_2/lib/conv.c.o cb_2/lib/debug.c.o cb_2/lib/compress.c.o cb_2/lib/string.c.o cb_2/lib/memset.c.o cb_2/lib/crypto.c.o cb_2/src/service.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/send_bytes.c.o -c cb_2/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/recv_bytes.c.o -c cb_2/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/memcpy.c.o -c cb_2/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/conv.c.o -c cb_2/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/debug.c.o -c cb_2/lib/debug.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/compress.c.o -c cb_2/lib/compress.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/string.c.o -c cb_2/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/memset.c.o -c cb_2/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/crypto.c.o -c cb_2/lib/crypto.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/service.c.o -c cb_2/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/send_bytes.c.o -c cb_3/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/recv_bytes.c.o -c cb_3/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/memcpy.c.o -c cb_3/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/conv.c.o -c cb_3/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/debug.c.o -c cb_3/lib/debug.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/compress.c.o -c cb_3/lib/compress.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/string.c.o -c cb_3/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/memset.c.o -c cb_3/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/crypto.c.o -c cb_3/lib/crypto.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/service.c.o -c cb_3/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/send_bytes.c.o -c cb_1/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/recv_bytes.c.o -c cb_1/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/memcpy.c.o -c cb_1/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/conv.c.o -c cb_1/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/debug.c.o -c cb_1/lib/debug.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/compress.c.o -c cb_1/lib/compress.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/string.c.o -c cb_1/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/memset.c.o -c cb_1/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/crypto.c.o -c cb_1/lib/crypto.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/service.c.o -c cb_1/src/service.c
	$(CC) $(FLAGS) -o OUTLAW_1 cb_1/lib/send_bytes.c.o cb_1/lib/recv_bytes.c.o cb_1/lib/memcpy.c.o cb_1/lib/conv.c.o cb_1/lib/debug.c.o cb_1/lib/compress.c.o cb_1/lib/string.c.o cb_1/lib/memset.c.o cb_1/lib/crypto.c.o cb_1/src/service.c.o $(LCGC) 
	$(CC) $(FLAGS) -o OUTLAW_3 cb_3/lib/send_bytes.c.o cb_3/lib/recv_bytes.c.o cb_3/lib/memcpy.c.o cb_3/lib/conv.c.o cb_3/lib/debug.c.o cb_3/lib/compress.c.o cb_3/lib/string.c.o cb_3/lib/memset.c.o cb_3/lib/crypto.c.o cb_3/src/service.c.o $(LCGC) 
	$(CC) $(FLAGS) -o OUTLAW_2 cb_2/lib/send_bytes.c.o cb_2/lib/recv_bytes.c.o cb_2/lib/memcpy.c.o cb_2/lib/conv.c.o cb_2/lib/debug.c.o cb_2/lib/compress.c.o cb_2/lib/string.c.o cb_2/lib/memset.c.o cb_2/lib/crypto.c.o cb_2/src/service.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov_1.c.o -c pov_1/pov_1.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov_debug.c.o -c pov_1/pov_debug.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -pedantic -o pov_2/pov_debug.c.o -c pov_2/pov_debug.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -pedantic -o pov_2/pov_2.c.o -c pov_2/pov_2.c
	$(CC) $(FLAGS) -o OUTLAW_pov_2 pov_2/pov_debug.c.o pov_2/pov_2.c.o $(LPOV) 
	$(CC) $(FLAGS) -o OUTLAW_pov_1 pov_1/pov_1.c.o pov_1/pov_debug.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov_1.c.o pov_1/pov_debug.c.o cb_3/lib/send_bytes.c.o cb_3/lib/recv_bytes.c.o cb_3/lib/memcpy.c.o cb_3/lib/conv.c.o cb_3/lib/debug.c.o cb_3/lib/compress.c.o cb_3/lib/string.c.o cb_3/lib/memset.c.o cb_3/lib/crypto.c.o cb_3/src/service.c.o pov_2/pov_debug.c.o pov_2/pov_2.c.o cb_2/lib/send_bytes.c.o cb_2/lib/recv_bytes.c.o cb_2/lib/memcpy.c.o cb_2/lib/conv.c.o cb_2/lib/debug.c.o cb_2/lib/compress.c.o cb_2/lib/string.c.o cb_2/lib/memset.c.o cb_2/lib/crypto.c.o cb_2/src/service.c.o cb_2/lib/send_bytes.c.o cb_2/lib/recv_bytes.c.o cb_2/lib/memcpy.c.o cb_2/lib/conv.c.o cb_2/lib/debug.c.o cb_2/lib/compress.c.o cb_2/lib/string.c.o cb_2/lib/memset.c.o cb_2/lib/crypto.c.o cb_2/src/service.c.o cb_1/lib/send_bytes.c.o cb_1/lib/recv_bytes.c.o cb_1/lib/memcpy.c.o cb_1/lib/conv.c.o cb_1/lib/debug.c.o cb_1/lib/compress.c.o cb_1/lib/string.c.o cb_1/lib/memset.c.o cb_1/lib/crypto.c.o cb_1/src/service.c.o cb_3/lib/send_bytes.c.o cb_3/lib/recv_bytes.c.o cb_3/lib/memcpy.c.o cb_3/lib/conv.c.o cb_3/lib/debug.c.o cb_3/lib/compress.c.o cb_3/lib/string.c.o cb_3/lib/memset.c.o cb_3/lib/crypto.c.o cb_3/src/service.c.o cb_1/lib/send_bytes.c.o cb_1/lib/recv_bytes.c.o cb_1/lib/memcpy.c.o cb_1/lib/conv.c.o cb_1/lib/debug.c.o cb_1/lib/compress.c.o cb_1/lib/string.c.o cb_1/lib/memset.c.o cb_1/lib/crypto.c.o cb_1/src/service.c.o OUTLAW_pov_1 OUTLAW_3_patched OUTLAW_pov_2 OUTLAW_2_patched OUTLAW_2 OUTLAW_1_patched OUTLAW_3 OUTLAW_1
