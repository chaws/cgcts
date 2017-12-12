CHAL=One_Vote

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o lib/streq.c.o -c lib/streq.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o lib/rand.c.o -c lib/rand.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o lib/recv_until_delim_n.c.o -c lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o lib/hash_table.c.o -c lib/hash_table.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o lib/send_bytes.c.o -c lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o lib/recv_bytes.c.o -c lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o lib/xxprintf.c.o -c lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o lib/conv.c.o -c lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o lib/list.c.o -c lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o lib/strlen.c.o -c lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -O0 -g -o src/election.c.o -c src/election.c
	$(CC) $(FLAGS) -o One_Vote_patched lib/streq.c.o lib/rand.c.o lib/recv_until_delim_n.c.o lib/hash_table.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/xxprintf.c.o lib/conv.c.o lib/list.c.o lib/memset.c.o lib/strlen.c.o src/service.c.o src/election.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/streq.c.o -c lib/streq.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/rand.c.o -c lib/rand.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/recv_until_delim_n.c.o -c lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/hash_table.c.o -c lib/hash_table.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/send_bytes.c.o -c lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/recv_bytes.c.o -c lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/xxprintf.c.o -c lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/conv.c.o -c lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/list.c.o -c lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/strlen.c.o -c lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/election.c.o -c src/election.c
	$(CC) $(FLAGS) -o One_Vote lib/streq.c.o lib/rand.c.o lib/recv_until_delim_n.c.o lib/hash_table.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/xxprintf.c.o lib/conv.c.o lib/list.c.o lib/memset.c.o lib/strlen.c.o src/service.c.o src/election.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -pedantic -o pov_2/pov_2.c.o -c pov_2/pov_2.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/conv.c.o -c pov_1/conv.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov_1.c.o -c pov_1/pov_1.c
	$(CC) $(FLAGS) -o One_Vote_pov_2 pov_2/pov_2.c.o $(LPOV) 
	$(CC) $(FLAGS) -o One_Vote_pov_1 pov_1/conv.c.o pov_1/pov_1.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov_2.c.o pov_1/conv.c.o pov_1/pov_1.c.o lib/streq.c.o lib/rand.c.o lib/recv_until_delim_n.c.o lib/hash_table.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/xxprintf.c.o lib/conv.c.o lib/list.c.o lib/memset.c.o lib/strlen.c.o src/service.c.o src/election.c.o lib/streq.c.o lib/rand.c.o lib/recv_until_delim_n.c.o lib/hash_table.c.o lib/malloc.c.o lib/send_bytes.c.o lib/recv_bytes.c.o lib/memcpy.c.o lib/xxprintf.c.o lib/conv.c.o lib/list.c.o lib/memset.c.o lib/strlen.c.o src/service.c.o src/election.c.o One_Vote_pov_2 One_Vote_pov_1 One_Vote_patched One_Vote
