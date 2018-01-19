CHAL=Rejistar

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/bzero.c.o -c lib/bzero.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/atoi.c.o -c lib/atoi.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/sprintf.c.o -c lib/sprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/atox.c.o -c lib/atox.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/strncmp.c.o -c lib/strncmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/comms.c.o -c lib/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/strtok.c.o -c lib/strtok.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o lib/strlen.c.o -c lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o src/token.c.o -c src/token.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o src/certificate.c.o -c src/certificate.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -I lib -I src -I include -g -o src/util.c.o -c src/util.c
	$(CXX) $(FLAGS) -o Rejistar_patched lib/malloc.c.o lib/bzero.c.o lib/memcpy.c.o lib/atoi.c.o lib/sprintf.c.o lib/atox.c.o lib/strncmp.c.o lib/comms.c.o lib/strtok.c.o lib/strlen.c.o src/token.c.o src/service.c.o src/certificate.c.o src/util.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/bzero.c.o -c lib/bzero.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/atoi.c.o -c lib/atoi.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/sprintf.c.o -c lib/sprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/atox.c.o -c lib/atox.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/strncmp.c.o -c lib/strncmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/comms.c.o -c lib/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/strtok.c.o -c lib/strtok.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o lib/strlen.c.o -c lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/token.c.o -c src/token.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/certificate.c.o -c src/certificate.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -o src/util.c.o -c src/util.c
	$(CXX) $(FLAGS) -o Rejistar lib/malloc.c.o lib/bzero.c.o lib/memcpy.c.o lib/atoi.c.o lib/sprintf.c.o lib/atox.c.o lib/strncmp.c.o lib/comms.c.o lib/strtok.c.o lib/strlen.c.o src/token.c.o src/service.c.o src/certificate.c.o src/util.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -g -pedantic -O0 -o pov_2/atox.c.o -c pov_2/atox.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -g -pedantic -O0 -o pov_2/pov_2.c.o -c pov_2/pov_2.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/service.c.o -c pov_1/service.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/comms.c.o -c pov_1/comms.c
	$(CXX) $(FLAGS) -o Rejistar_pov_1 pov_1/service.c.o pov_1/comms.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Rejistar_pov_2 pov_2/atox.c.o pov_2/pov_2.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/atox.c.o pov_2/pov_2.c.o pov_1/service.c.o pov_1/comms.c.o lib/malloc.c.o lib/bzero.c.o lib/memcpy.c.o lib/atoi.c.o lib/sprintf.c.o lib/atox.c.o lib/strncmp.c.o lib/comms.c.o lib/strtok.c.o lib/strlen.c.o src/token.c.o src/service.c.o src/certificate.c.o src/util.c.o lib/malloc.c.o lib/bzero.c.o lib/memcpy.c.o lib/atoi.c.o lib/sprintf.c.o lib/atox.c.o lib/strncmp.c.o lib/comms.c.o lib/strtok.c.o lib/strlen.c.o src/token.c.o src/service.c.o src/certificate.c.o src/util.c.o Rejistar_pov_2 Rejistar_pov_1 Rejistar_patched Rejistar
