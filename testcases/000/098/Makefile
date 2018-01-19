CHAL=virtual_pet

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/printf.c.o -c lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/cgc_libc.c.o -c lib/cgc_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/cgc_malloc.c.o -c lib/cgc_malloc.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/main.cc.o -c src/main.cc
	$(CXX) $(FLAGS) -o virtual_pet_patched lib/printf.c.o lib/cgc_libc.c.o lib/cgc_malloc.c.o src/main.cc.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/printf.c.o -c lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/cgc_libc.c.o -c lib/cgc_libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/cgc_malloc.c.o -c lib/cgc_malloc.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/main.cc.o -c src/main.cc
	$(CXX) $(FLAGS) -o virtual_pet lib/printf.c.o lib/cgc_libc.c.o lib/cgc_malloc.c.o src/main.cc.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -fno-exceptions -fno-rtti -O0 -g -pedantic -o pov_3/pov.c.o -c pov_3/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -fno-exceptions -fno-rtti -O0 -g -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_4 -I include -I lib -I src -fno-exceptions -fno-rtti -O0 -g -pedantic -o pov_4/pov.c.o -c pov_4/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -fno-exceptions -fno-rtti -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CXX) $(FLAGS) -o virtual_pet_pov_4 pov_4/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o virtual_pet_pov_1 pov_1/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o virtual_pet_pov_3 pov_3/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o virtual_pet_pov_2 pov_2/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_3/pov.c.o pov_2/pov.c.o pov_4/pov.c.o pov_1/pov.c.o lib/printf.c.o lib/cgc_libc.c.o lib/cgc_malloc.c.o src/main.cc.o lib/printf.c.o lib/cgc_libc.c.o lib/cgc_malloc.c.o src/main.cc.o virtual_pet_pov_3 virtual_pet_pov_2 virtual_pet_pov_4 virtual_pet_pov_1 virtual_pet_patched virtual_pet
