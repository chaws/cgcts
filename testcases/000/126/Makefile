CHAL=Simple_Stack_Machine

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -o src/main.c.o -c src/main.c
	$(CXX) $(FLAGS) -o Simple_Stack_Machine_patched src/main.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -o src/main.c.o -c src/main.c
	$(CXX) $(FLAGS) -o Simple_Stack_Machine src/main.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -pedantic -O0 -o pov_3/pov.c.o -c pov_3/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -pedantic -O0 -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -pedantic -O0 -o pov_1/pov.c.o -c pov_1/pov.c
	$(CXX) $(FLAGS) -o Simple_Stack_Machine_pov_1 pov_1/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Simple_Stack_Machine_pov_2 pov_2/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Simple_Stack_Machine_pov_3 pov_3/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_3/pov.c.o pov_2/pov.c.o pov_1/pov.c.o src/main.c.o src/main.c.o Simple_Stack_Machine_pov_3 Simple_Stack_Machine_pov_2 Simple_Stack_Machine_pov_1 Simple_Stack_Machine_patched Simple_Stack_Machine
