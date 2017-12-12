CHAL=FISHYXML

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/send.c.o -c lib/send.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/recv_until_delim.c.o -c lib/recv_until_delim.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/pi_prng.c.o -c lib/pi_prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/sendall.c.o -c lib/sendall.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/strncpy.c.o -c lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/gofish.c.o -c src/gofish.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/hand.c.o -c src/hand.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/operation.c.o -c src/operation.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/deck.c.o -c src/deck.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/player.c.o -c src/player.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/rxtx.c.o -c src/rxtx.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/fishyxml.c.o -c src/fishyxml.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/card.c.o -c src/card.c
	$(CC) $(FLAGS) -o FISHYXML_patched lib/send.c.o lib/malloc.c.o lib/recv_until_delim.c.o lib/memcpy.c.o lib/pi_prng.c.o lib/sendall.c.o lib/strncpy.c.o lib/memset.c.o src/gofish.c.o src/hand.c.o src/operation.c.o src/deck.c.o src/service.c.o src/player.c.o src/rxtx.c.o src/fishyxml.c.o src/card.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/send.c.o -c lib/send.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/recv_until_delim.c.o -c lib/recv_until_delim.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/pi_prng.c.o -c lib/pi_prng.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/sendall.c.o -c lib/sendall.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/strncpy.c.o -c lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/gofish.c.o -c src/gofish.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/hand.c.o -c src/hand.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/operation.c.o -c src/operation.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/deck.c.o -c src/deck.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/player.c.o -c src/player.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/rxtx.c.o -c src/rxtx.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/fishyxml.c.o -c src/fishyxml.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/card.c.o -c src/card.c
	$(CC) $(FLAGS) -o FISHYXML lib/send.c.o lib/malloc.c.o lib/recv_until_delim.c.o lib/memcpy.c.o lib/pi_prng.c.o lib/sendall.c.o lib/strncpy.c.o lib/memset.c.o src/gofish.c.o src/hand.c.o src/operation.c.o src/deck.c.o src/service.c.o src/player.c.o src/rxtx.c.o src/fishyxml.c.o src/card.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(FLAGS) -o FISHYXML_pov_2 pov_2/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o FISHYXML_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov.c.o pov_1/pov.c.o lib/send.c.o lib/malloc.c.o lib/recv_until_delim.c.o lib/memcpy.c.o lib/pi_prng.c.o lib/sendall.c.o lib/strncpy.c.o lib/memset.c.o src/gofish.c.o src/hand.c.o src/operation.c.o src/deck.c.o src/service.c.o src/player.c.o src/rxtx.c.o src/fishyxml.c.o src/card.c.o lib/send.c.o lib/malloc.c.o lib/recv_until_delim.c.o lib/memcpy.c.o lib/pi_prng.c.o lib/sendall.c.o lib/strncpy.c.o lib/memset.c.o src/gofish.c.o src/hand.c.o src/operation.c.o src/deck.c.o src/service.c.o src/player.c.o src/rxtx.c.o src/fishyxml.c.o src/card.c.o FISHYXML_pov_2 FISHYXML_pov_1 FISHYXML_patched FISHYXML
