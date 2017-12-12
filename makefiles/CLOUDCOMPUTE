CHAL=CLOUDCOMPUTE

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/streq.c.o -c lib/streq.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/recv_until_delim_n.c.o -c lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/send_bytes.c.o -c lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/recv_bytes.c.o -c lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/char.c.o -c lib/char.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/debug.c.o -c lib/debug.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/list.c.o -c lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/strlen.c.o -c lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/bytecode.c.o -c src/bytecode.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(FLAGS) -o CLOUDCOMPUTE_patched lib/streq.c.o lib/recv_until_delim_n.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/char.c.o lib/debug.c.o lib/list.c.o lib/memset.c.o lib/strlen.c.o src/bytecode.c.o src/service.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/streq.c.o -c lib/streq.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/recv_until_delim_n.c.o -c lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/send_bytes.c.o -c lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/recv_bytes.c.o -c lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/char.c.o -c lib/char.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/debug.c.o -c lib/debug.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/list.c.o -c lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/strlen.c.o -c lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/bytecode.c.o -c src/bytecode.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(FLAGS) -o CLOUDCOMPUTE lib/streq.c.o lib/recv_until_delim_n.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/char.c.o lib/debug.c.o lib/list.c.o lib/memset.c.o lib/strlen.c.o src/bytecode.c.o src/service.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(FLAGS) -o CLOUDCOMPUTE_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f lib/streq.c.o lib/recv_until_delim_n.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/char.c.o lib/debug.c.o lib/list.c.o lib/memset.c.o lib/strlen.c.o src/bytecode.c.o src/service.c.o pov_1/pov.c.o lib/streq.c.o lib/recv_until_delim_n.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/char.c.o lib/debug.c.o lib/list.c.o lib/memset.c.o lib/strlen.c.o src/bytecode.c.o src/service.c.o CLOUDCOMPUTE_patched CLOUDCOMPUTE_pov_1 CLOUDCOMPUTE
