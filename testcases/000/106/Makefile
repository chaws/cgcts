CHAL=Shipgame

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/printf.c.o -c cb_3/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/string.c.o -c cb_3/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/mylibc.c.o -c cb_3/lib/mylibc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/newsletter.c.o -c cb_3/src/newsletter.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/printf.c.o -c cb_2/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/string.c.o -c cb_2/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/mylibc.c.o -c cb_2/lib/mylibc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/walkthrough.c.o -c cb_2/src/walkthrough.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/printf.c.o -c cb_1/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/string.c.o -c cb_1/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/mylibc.c.o -c cb_1/lib/mylibc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/router.c.o -c cb_1/src/router.c
	$(CXX) $(FLAGS) -o Shipgame_3_patched cb_3/lib/printf.c.o cb_3/lib/string.c.o cb_3/lib/mylibc.c.o cb_3/src/newsletter.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Shipgame_2_patched cb_2/lib/printf.c.o cb_2/lib/string.c.o cb_2/lib/mylibc.c.o cb_2/src/walkthrough.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Shipgame_1_patched cb_1/lib/printf.c.o cb_1/lib/string.c.o cb_1/lib/mylibc.c.o cb_1/src/router.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/printf.c.o -c cb_3/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/string.c.o -c cb_3/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/mylibc.c.o -c cb_3/lib/mylibc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/newsletter.c.o -c cb_3/src/newsletter.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/printf.c.o -c cb_2/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/string.c.o -c cb_2/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/mylibc.c.o -c cb_2/lib/mylibc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/walkthrough.c.o -c cb_2/src/walkthrough.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/printf.c.o -c cb_1/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/string.c.o -c cb_1/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/mylibc.c.o -c cb_1/lib/mylibc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/router.c.o -c cb_1/src/router.c
	$(CXX) $(FLAGS) -o Shipgame_3 cb_3/lib/printf.c.o cb_3/lib/string.c.o cb_3/lib/mylibc.c.o cb_3/src/newsletter.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Shipgame_2 cb_2/lib/printf.c.o cb_2/lib/string.c.o cb_2/lib/mylibc.c.o cb_2/src/walkthrough.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Shipgame_1 cb_1/lib/printf.c.o cb_1/lib/string.c.o cb_1/lib/mylibc.c.o cb_1/src/router.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CXX) $(FLAGS) -o Shipgame_pov_1 pov_1/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Shipgame_pov_2 pov_2/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov.c.o cb_3/lib/printf.c.o cb_3/lib/string.c.o cb_3/lib/mylibc.c.o cb_3/src/newsletter.c.o cb_3/lib/printf.c.o cb_3/lib/string.c.o cb_3/lib/mylibc.c.o cb_3/src/newsletter.c.o pov_1/pov.c.o cb_2/lib/printf.c.o cb_2/lib/string.c.o cb_2/lib/mylibc.c.o cb_2/src/walkthrough.c.o cb_2/lib/printf.c.o cb_2/lib/string.c.o cb_2/lib/mylibc.c.o cb_2/src/walkthrough.c.o cb_1/lib/printf.c.o cb_1/lib/string.c.o cb_1/lib/mylibc.c.o cb_1/src/router.c.o cb_1/lib/printf.c.o cb_1/lib/string.c.o cb_1/lib/mylibc.c.o cb_1/src/router.c.o Shipgame_pov_2 Shipgame_3_patched Shipgame_3 Shipgame_pov_1 Shipgame_2_patched Shipgame_2 Shipgame_1_patched Shipgame_1
