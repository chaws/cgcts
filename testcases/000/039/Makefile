CHAL=Resort_Modeller

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/send.c.o -c lib/send.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/memcmp.c.o -c lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/xxprintf.c.o -c lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/recv_all.c.o -c lib/recv_all.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/sendall.c.o -c lib/sendall.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/char.c.o -c lib/char.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/int2str.c.o -c lib/int2str.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/strncpy.c.o -c lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/strncmp.c.o -c lib/strncmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/read_all.c.o -c lib/read_all.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/hex.c.o -c lib/hex.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o lib/strlen.c.o -c lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o src/resort.c.o -c src/resort.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o src/decider.c.o -c src/decider.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o src/trail.c.o -c src/trail.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o src/rider.c.o -c src/rider.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -o src/lift.c.o -c src/lift.c
	$(CXX) $(FLAGS) -o Resort_Modeller_patched lib/send.c.o lib/malloc.c.o lib/memcpy.c.o lib/memcmp.c.o lib/xxprintf.c.o lib/recv_all.c.o lib/sendall.c.o lib/char.c.o lib/int2str.c.o lib/strncpy.c.o lib/strncmp.c.o lib/read_all.c.o lib/hex.c.o lib/memset.c.o lib/strlen.c.o src/resort.c.o src/decider.c.o src/service.c.o src/trail.c.o src/rider.c.o src/lift.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/send.c.o -c lib/send.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/memcmp.c.o -c lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/xxprintf.c.o -c lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/recv_all.c.o -c lib/recv_all.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/sendall.c.o -c lib/sendall.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/char.c.o -c lib/char.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/int2str.c.o -c lib/int2str.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/strncpy.c.o -c lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/strncmp.c.o -c lib/strncmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/read_all.c.o -c lib/read_all.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/hex.c.o -c lib/hex.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/strlen.c.o -c lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/resort.c.o -c src/resort.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/decider.c.o -c src/decider.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/trail.c.o -c src/trail.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/rider.c.o -c src/rider.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/lift.c.o -c src/lift.c
	$(CXX) $(FLAGS) -o Resort_Modeller lib/send.c.o lib/malloc.c.o lib/memcpy.c.o lib/memcmp.c.o lib/xxprintf.c.o lib/recv_all.c.o lib/sendall.c.o lib/char.c.o lib/int2str.c.o lib/strncpy.c.o lib/strncmp.c.o lib/read_all.c.o lib/hex.c.o lib/memset.c.o lib/strlen.c.o src/resort.c.o src/decider.c.o src/service.c.o src/trail.c.o src/rider.c.o src/lift.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/pov_1.c.o -c pov_1/pov_1.c
	$(CXX) $(FLAGS) -o Resort_Modeller_pov_1 pov_1/pov_1.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov_1.c.o lib/send.c.o lib/malloc.c.o lib/memcpy.c.o lib/memcmp.c.o lib/xxprintf.c.o lib/recv_all.c.o lib/sendall.c.o lib/char.c.o lib/int2str.c.o lib/strncpy.c.o lib/strncmp.c.o lib/read_all.c.o lib/hex.c.o lib/memset.c.o lib/strlen.c.o src/resort.c.o src/decider.c.o src/service.c.o src/trail.c.o src/rider.c.o src/lift.c.o lib/send.c.o lib/malloc.c.o lib/memcpy.c.o lib/memcmp.c.o lib/xxprintf.c.o lib/recv_all.c.o lib/sendall.c.o lib/char.c.o lib/int2str.c.o lib/strncpy.c.o lib/strncmp.c.o lib/read_all.c.o lib/hex.c.o lib/memset.c.o lib/strlen.c.o src/resort.c.o src/decider.c.o src/service.c.o src/trail.c.o src/rider.c.o src/lift.c.o Resort_Modeller_pov_1 Resort_Modeller_patched Resort_Modeller
