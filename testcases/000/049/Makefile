CHAL=Snail_Mail

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/rand.c.o -c lib/rand.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/send_bytes.c.o -c lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/recv_bytes.c.o -c lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/memcmp.c.o -c lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/bst.c.o -c lib/bst.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/list.c.o -c lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o src/mail.c.o -c src/mail.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o src/postage.c.o -c src/postage.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o src/service.c.o -c src/service.c
	$(CXX) $(FLAGS) -o Snail_Mail_patched lib/rand.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/memcmp.c.o lib/bst.c.o lib/list.c.o lib/memset.c.o src/mail.c.o src/postage.c.o src/service.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/rand.c.o -c lib/rand.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/send_bytes.c.o -c lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/recv_bytes.c.o -c lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/memcmp.c.o -c lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/bst.c.o -c lib/bst.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/list.c.o -c lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/mail.c.o -c src/mail.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/postage.c.o -c src/postage.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/service.c.o -c src/service.c
	$(CXX) $(FLAGS) -o Snail_Mail lib/rand.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/memcmp.c.o lib/bst.c.o lib/list.c.o lib/memset.c.o src/mail.c.o src/postage.c.o src/service.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/pov1.c.o -c pov_1/pov1.c
	$(CXX) $(FLAGS) -o Snail_Mail_pov_1 pov_1/pov1.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov1.c.o lib/rand.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/memcmp.c.o lib/bst.c.o lib/list.c.o lib/memset.c.o src/mail.c.o src/postage.c.o src/service.c.o lib/rand.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/memcmp.c.o lib/bst.c.o lib/list.c.o lib/memset.c.o src/mail.c.o src/postage.c.o src/service.c.o Snail_Mail_pov_1 Snail_Mail_patched Snail_Mail
