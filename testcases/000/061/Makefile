CHAL=On_Sale

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/recv_until_delim_n.c.o -c lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/send_bytes.c.o -c lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/recv_bytes.c.o -c lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/memcmp.c.o -c lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/list.c.o -c lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o src/inventory.c.o -c src/inventory.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o src/sale.c.o -c src/sale.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o src/products.c.o -c src/products.c
	$(CC) $(FLAGS) -o On_Sale_patched lib/recv_until_delim_n.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/memcmp.c.o lib/list.c.o lib/string.c.o lib/memset.c.o src/inventory.c.o src/service.c.o src/sale.c.o src/products.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/recv_until_delim_n.c.o -c lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/send_bytes.c.o -c lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/recv_bytes.c.o -c lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/memcmp.c.o -c lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/list.c.o -c lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/inventory.c.o -c src/inventory.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/sale.c.o -c src/sale.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/products.c.o -c src/products.c
	$(CC) $(FLAGS) -o On_Sale lib/recv_until_delim_n.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/memcmp.c.o lib/list.c.o lib/string.c.o lib/memset.c.o src/inventory.c.o src/service.c.o src/sale.c.o src/products.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -g -pedantic -O0 -o pov_2/pov_2.c.o -c pov_2/pov_2.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/pov_1.c.o -c pov_1/pov_1.c
	$(CC) $(FLAGS) -o On_Sale_pov_1 pov_1/pov_1.c.o $(LPOV) 
	$(CC) $(FLAGS) -o On_Sale_pov_2 pov_2/pov_2.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov_2.c.o pov_1/pov_1.c.o lib/recv_until_delim_n.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/memcmp.c.o lib/list.c.o lib/string.c.o lib/memset.c.o src/inventory.c.o src/service.c.o src/sale.c.o src/products.c.o lib/recv_until_delim_n.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/memcmp.c.o lib/list.c.o lib/string.c.o lib/memset.c.o src/inventory.c.o src/service.c.o src/sale.c.o src/products.c.o On_Sale_pov_2 On_Sale_pov_1 On_Sale_patched On_Sale
