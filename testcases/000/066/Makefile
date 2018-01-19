CHAL=Multipass3

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -o lib/ll.c.o -c lib/ll.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -o lib/sheap.c.o -c lib/sheap.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -o src/account.c.o -c src/account.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -o src/multipass.c.o -c src/multipass.c
	$(CXX) $(FLAGS) -o Multipass3_patched lib/ll.c.o lib/sheap.c.o lib/libc.c.o src/account.c.o src/service.c.o src/multipass.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/ll.c.o -c lib/ll.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/sheap.c.o -c lib/sheap.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/account.c.o -c src/account.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/multipass.c.o -c src/multipass.c
	$(CXX) $(FLAGS) -o Multipass3 lib/ll.c.o lib/sheap.c.o lib/libc.c.o src/account.c.o src/service.c.o src/multipass.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -g -pedantic -O0 -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -g -pedantic -O0 -o pov_3/pov.c.o -c pov_3/pov.c
	$(CXX) $(FLAGS) -o Multipass3_pov_1 pov_1/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Multipass3_pov_2 pov_2/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Multipass3_pov_3 pov_3/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov.c.o pov_1/pov.c.o lib/ll.c.o lib/sheap.c.o lib/libc.c.o src/account.c.o src/service.c.o src/multipass.c.o pov_3/pov.c.o lib/ll.c.o lib/sheap.c.o lib/libc.c.o src/account.c.o src/service.c.o src/multipass.c.o Multipass3_pov_2 Multipass3_pov_1 Multipass3_patched Multipass3_pov_3 Multipass3
