CHAL=String_Info_Calculator

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/e_libc.c.o -c lib/e_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/rand.c.o -c lib/rand.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/recv_until_delim_n.c.o -c lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/send_bytes.c.o -c lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/char.c.o -c lib/char.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/strinfo.c.o -c src/strinfo.c
	$(CXX) $(FLAGS) -o String_Info_Calculator_patched lib/e_libc.c.o lib/rand.c.o lib/recv_until_delim_n.c.o lib/send_bytes.c.o lib/char.c.o lib/memset.c.o src/service.c.o src/strinfo.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/e_libc.c.o -c lib/e_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/rand.c.o -c lib/rand.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/recv_until_delim_n.c.o -c lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/send_bytes.c.o -c lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/char.c.o -c lib/char.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/strinfo.c.o -c src/strinfo.c
	$(CXX) $(FLAGS) -o String_Info_Calculator lib/e_libc.c.o lib/rand.c.o lib/recv_until_delim_n.c.o lib/send_bytes.c.o lib/char.c.o lib/memset.c.o src/service.c.o src/strinfo.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/e_libc.c.o -c pov_1/e_libc.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/rand.c.o -c pov_1/rand.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/send_bytes.c.o -c pov_1/send_bytes.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/recv_bytes.c.o -c pov_1/recv_bytes.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/service.c.o -c pov_1/service.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/memset.c.o -c pov_1/memset.c
	$(CXX) $(FLAGS) -o String_Info_Calculator_pov_1 pov_1/e_libc.c.o pov_1/rand.c.o pov_1/send_bytes.c.o pov_1/recv_bytes.c.o pov_1/service.c.o pov_1/memset.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/e_libc.c.o pov_1/rand.c.o pov_1/send_bytes.c.o pov_1/recv_bytes.c.o pov_1/service.c.o pov_1/memset.c.o lib/e_libc.c.o lib/rand.c.o lib/recv_until_delim_n.c.o lib/send_bytes.c.o lib/char.c.o lib/memset.c.o src/service.c.o src/strinfo.c.o lib/e_libc.c.o lib/rand.c.o lib/recv_until_delim_n.c.o lib/send_bytes.c.o lib/char.c.o lib/memset.c.o src/service.c.o src/strinfo.c.o String_Info_Calculator_pov_1 String_Info_Calculator_patched String_Info_Calculator
