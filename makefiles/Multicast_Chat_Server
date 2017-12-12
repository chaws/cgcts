CHAL=Multicast_Chat_Server

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o src/subscription.c.o -c src/subscription.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o src/auth.c.o -c src/auth.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o src/service.c.o -c src/service.c
	$(CC) $(FLAGS) -o Multicast_Chat_Server_patched lib/malloc.c.o lib/libc.c.o src/subscription.c.o src/auth.c.o src/service.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/subscription.c.o -c src/subscription.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/auth.c.o -c src/auth.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/service.c.o -c src/service.c
	$(CC) $(FLAGS) -o Multicast_Chat_Server lib/malloc.c.o lib/libc.c.o src/subscription.c.o src/auth.c.o src/service.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/pov1.c.o -c pov_1/pov1.c
	$(CC) $(FLAGS) -o Multicast_Chat_Server_pov_1 pov_1/pov1.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov1.c.o lib/malloc.c.o lib/libc.c.o src/subscription.c.o src/auth.c.o src/service.c.o lib/malloc.c.o lib/libc.c.o src/subscription.c.o src/auth.c.o src/service.c.o Multicast_Chat_Server_pov_1 Multicast_Chat_Server_patched Multicast_Chat_Server
