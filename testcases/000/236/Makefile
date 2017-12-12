CHAL=Multi_Arena_Pursuit_Simulator

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -DNDEBUG -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -DNDEBUG -o lib/bzero.c.o -c lib/bzero.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -DNDEBUG -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -DNDEBUG -o lib/atoi.c.o -c lib/atoi.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -DNDEBUG -o lib/sprintf.c.o -c lib/sprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -DNDEBUG -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -DNDEBUG -o lib/atox.c.o -c lib/atox.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -DNDEBUG -o lib/strncmp.c.o -c lib/strncmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -DNDEBUG -o lib/comms.c.o -c lib/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -DNDEBUG -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -DNDEBUG -o lib/strtok.c.o -c lib/strtok.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -DNDEBUG -o lib/strlen.c.o -c lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -DNDEBUG -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -g -DNDEBUG -o src/map.c.o -c src/map.c
	$(CC) $(FLAGS) -o Multi_Arena_Pursuit_Simulator_patched lib/malloc.c.o lib/bzero.c.o lib/memcpy.c.o lib/atoi.c.o lib/sprintf.c.o lib/math.c.o lib/atox.c.o lib/strncmp.c.o lib/comms.c.o lib/memset.c.o lib/strtok.c.o lib/strlen.c.o src/service.c.o src/map.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o lib/bzero.c.o -c lib/bzero.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o lib/atoi.c.o -c lib/atoi.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o lib/sprintf.c.o -c lib/sprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o lib/atox.c.o -c lib/atox.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o lib/strncmp.c.o -c lib/strncmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o lib/comms.c.o -c lib/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o lib/strtok.c.o -c lib/strtok.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o lib/strlen.c.o -c lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -DNDEBUG -o src/map.c.o -c src/map.c
	$(CC) $(FLAGS) -o Multi_Arena_Pursuit_Simulator lib/malloc.c.o lib/bzero.c.o lib/memcpy.c.o lib/atoi.c.o lib/sprintf.c.o lib/math.c.o lib/atox.c.o lib/strncmp.c.o lib/comms.c.o lib/memset.c.o lib/strtok.c.o lib/strlen.c.o src/service.c.o src/map.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -DNDEBUG -pedantic -O0 -o pov_1/bzero.c.o -c pov_1/bzero.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -DNDEBUG -pedantic -O0 -o pov_1/atoi.c.o -c pov_1/atoi.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -DNDEBUG -pedantic -O0 -o pov_1/sprintf.c.o -c pov_1/sprintf.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -DNDEBUG -pedantic -O0 -o pov_1/atox.c.o -c pov_1/atox.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -DNDEBUG -pedantic -O0 -o pov_1/pov1.c.o -c pov_1/pov1.c
	$(CC) $(FLAGS) -o Multi_Arena_Pursuit_Simulator_pov_1 pov_1/bzero.c.o pov_1/atoi.c.o pov_1/sprintf.c.o pov_1/atox.c.o pov_1/pov1.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/bzero.c.o pov_1/atoi.c.o pov_1/sprintf.c.o pov_1/atox.c.o pov_1/pov1.c.o lib/malloc.c.o lib/bzero.c.o lib/memcpy.c.o lib/atoi.c.o lib/sprintf.c.o lib/math.c.o lib/atox.c.o lib/strncmp.c.o lib/comms.c.o lib/memset.c.o lib/strtok.c.o lib/strlen.c.o src/service.c.o src/map.c.o lib/malloc.c.o lib/bzero.c.o lib/memcpy.c.o lib/atoi.c.o lib/sprintf.c.o lib/math.c.o lib/atox.c.o lib/strncmp.c.o lib/comms.c.o lib/memset.c.o lib/strtok.c.o lib/strlen.c.o src/service.c.o src/map.c.o Multi_Arena_Pursuit_Simulator_pov_1 Multi_Arena_Pursuit_Simulator_patched Multi_Arena_Pursuit_Simulator
