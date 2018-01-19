CHAL=REMATCH_1--Hat_Trick--Morris_Worm

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/ctype.c.o -c cb_1/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/math.c.o -c cb_1/lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/stdlib.c.o -c cb_1/lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/libc.c.o -c cb_1/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/stdio.c.o -c cb_1/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/string.c.o -c cb_1/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/frontdoor.c.o -c cb_1/src/frontdoor.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/shell.c.o -c cb_3/lib/shell.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/malloc.c.o -c cb_3/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/ctype.c.o -c cb_3/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/math.c.o -c cb_3/lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/stdlib.c.o -c cb_3/lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/libc.c.o -c cb_3/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/stdio.c.o -c cb_3/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/string.c.o -c cb_3/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/ish.c.o -c cb_3/src/ish.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/ctype.c.o -c cb_2/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/math.c.o -c cb_2/lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/stdlib.c.o -c cb_2/lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/libc.c.o -c cb_2/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/stdio.c.o -c cb_2/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/string.c.o -c cb_2/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/lookupd.c.o -c cb_2/src/lookupd.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/lookup.c.o -c cb_2/src/lookup.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/shell.c.o -c cb_4/lib/shell.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/malloc.c.o -c cb_4/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/ctype.c.o -c cb_4/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/math.c.o -c cb_4/lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/stdlib.c.o -c cb_4/lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/libc.c.o -c cb_4/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/stdio.c.o -c cb_4/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/string.c.o -c cb_4/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/src/mailsender.c.o -c cb_4/src/mailsender.c
	$(CXX) $(FLAGS) -o REMATCH_1--Hat_Trick--Morris_Worm_4_patched cb_4/lib/shell.c.o cb_4/lib/malloc.c.o cb_4/lib/ctype.c.o cb_4/lib/math.c.o cb_4/lib/stdlib.c.o cb_4/lib/libc.c.o cb_4/lib/stdio.c.o cb_4/lib/string.c.o cb_4/src/mailsender.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REMATCH_1--Hat_Trick--Morris_Worm_3_patched cb_3/lib/shell.c.o cb_3/lib/malloc.c.o cb_3/lib/ctype.c.o cb_3/lib/math.c.o cb_3/lib/stdlib.c.o cb_3/lib/libc.c.o cb_3/lib/stdio.c.o cb_3/lib/string.c.o cb_3/src/ish.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REMATCH_1--Hat_Trick--Morris_Worm_2_patched cb_2/lib/malloc.c.o cb_2/lib/ctype.c.o cb_2/lib/math.c.o cb_2/lib/stdlib.c.o cb_2/lib/libc.c.o cb_2/lib/stdio.c.o cb_2/lib/string.c.o cb_2/src/lookupd.c.o cb_2/src/lookup.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REMATCH_1--Hat_Trick--Morris_Worm_1_patched cb_1/lib/malloc.c.o cb_1/lib/ctype.c.o cb_1/lib/math.c.o cb_1/lib/stdlib.c.o cb_1/lib/libc.c.o cb_1/lib/stdio.c.o cb_1/lib/string.c.o cb_1/src/frontdoor.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/ctype.c.o -c cb_2/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/math.c.o -c cb_2/lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/stdlib.c.o -c cb_2/lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/libc.c.o -c cb_2/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/stdio.c.o -c cb_2/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/string.c.o -c cb_2/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/lookupd.c.o -c cb_2/src/lookupd.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/lookup.c.o -c cb_2/src/lookup.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/shell.c.o -c cb_4/lib/shell.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/malloc.c.o -c cb_4/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/ctype.c.o -c cb_4/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/math.c.o -c cb_4/lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/stdlib.c.o -c cb_4/lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/libc.c.o -c cb_4/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/stdio.c.o -c cb_4/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/string.c.o -c cb_4/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/src/mailsender.c.o -c cb_4/src/mailsender.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/shell.c.o -c cb_3/lib/shell.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/malloc.c.o -c cb_3/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/ctype.c.o -c cb_3/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/math.c.o -c cb_3/lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/stdlib.c.o -c cb_3/lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/libc.c.o -c cb_3/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/stdio.c.o -c cb_3/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/string.c.o -c cb_3/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/ish.c.o -c cb_3/src/ish.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/ctype.c.o -c cb_1/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/math.c.o -c cb_1/lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/stdlib.c.o -c cb_1/lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/libc.c.o -c cb_1/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/stdio.c.o -c cb_1/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/string.c.o -c cb_1/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/frontdoor.c.o -c cb_1/src/frontdoor.c
	$(CXX) $(FLAGS) -o REMATCH_1--Hat_Trick--Morris_Worm_4 cb_4/lib/shell.c.o cb_4/lib/malloc.c.o cb_4/lib/ctype.c.o cb_4/lib/math.c.o cb_4/lib/stdlib.c.o cb_4/lib/libc.c.o cb_4/lib/stdio.c.o cb_4/lib/string.c.o cb_4/src/mailsender.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REMATCH_1--Hat_Trick--Morris_Worm_3 cb_3/lib/shell.c.o cb_3/lib/malloc.c.o cb_3/lib/ctype.c.o cb_3/lib/math.c.o cb_3/lib/stdlib.c.o cb_3/lib/libc.c.o cb_3/lib/stdio.c.o cb_3/lib/string.c.o cb_3/src/ish.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REMATCH_1--Hat_Trick--Morris_Worm_2 cb_2/lib/malloc.c.o cb_2/lib/ctype.c.o cb_2/lib/math.c.o cb_2/lib/stdlib.c.o cb_2/lib/libc.c.o cb_2/lib/stdio.c.o cb_2/lib/string.c.o cb_2/src/lookupd.c.o cb_2/src/lookup.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REMATCH_1--Hat_Trick--Morris_Worm_1 cb_1/lib/malloc.c.o cb_1/lib/ctype.c.o cb_1/lib/math.c.o cb_1/lib/stdlib.c.o cb_1/lib/libc.c.o cb_1/lib/stdio.c.o cb_1/lib/string.c.o cb_1/src/frontdoor.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -O0 -g -pedantic -o pov_3/pov.c.o -c pov_3/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CXX) $(FLAGS) -o REMATCH_1--Hat_Trick--Morris_Worm_pov_1 pov_1/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o REMATCH_1--Hat_Trick--Morris_Worm_pov_3 pov_3/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o REMATCH_1--Hat_Trick--Morris_Worm_pov_2 pov_2/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_3/pov.c.o cb_1/lib/malloc.c.o cb_1/lib/ctype.c.o cb_1/lib/math.c.o cb_1/lib/stdlib.c.o cb_1/lib/libc.c.o cb_1/lib/stdio.c.o cb_1/lib/string.c.o cb_1/src/frontdoor.c.o pov_1/pov.c.o pov_2/pov.c.o cb_2/lib/malloc.c.o cb_2/lib/ctype.c.o cb_2/lib/math.c.o cb_2/lib/stdlib.c.o cb_2/lib/libc.c.o cb_2/lib/stdio.c.o cb_2/lib/string.c.o cb_2/src/lookupd.c.o cb_2/src/lookup.c.o cb_3/lib/shell.c.o cb_3/lib/malloc.c.o cb_3/lib/ctype.c.o cb_3/lib/math.c.o cb_3/lib/stdlib.c.o cb_3/lib/libc.c.o cb_3/lib/stdio.c.o cb_3/lib/string.c.o cb_3/src/ish.c.o cb_4/lib/shell.c.o cb_4/lib/malloc.c.o cb_4/lib/ctype.c.o cb_4/lib/math.c.o cb_4/lib/stdlib.c.o cb_4/lib/libc.c.o cb_4/lib/stdio.c.o cb_4/lib/string.c.o cb_4/src/mailsender.c.o cb_2/lib/malloc.c.o cb_2/lib/ctype.c.o cb_2/lib/math.c.o cb_2/lib/stdlib.c.o cb_2/lib/libc.c.o cb_2/lib/stdio.c.o cb_2/lib/string.c.o cb_2/src/lookupd.c.o cb_2/src/lookup.c.o cb_3/lib/shell.c.o cb_3/lib/malloc.c.o cb_3/lib/ctype.c.o cb_3/lib/math.c.o cb_3/lib/stdlib.c.o cb_3/lib/libc.c.o cb_3/lib/stdio.c.o cb_3/lib/string.c.o cb_3/src/ish.c.o cb_1/lib/malloc.c.o cb_1/lib/ctype.c.o cb_1/lib/math.c.o cb_1/lib/stdlib.c.o cb_1/lib/libc.c.o cb_1/lib/stdio.c.o cb_1/lib/string.c.o cb_1/src/frontdoor.c.o cb_4/lib/shell.c.o cb_4/lib/malloc.c.o cb_4/lib/ctype.c.o cb_4/lib/math.c.o cb_4/lib/stdlib.c.o cb_4/lib/libc.c.o cb_4/lib/stdio.c.o cb_4/lib/string.c.o cb_4/src/mailsender.c.o REMATCH_1--Hat_Trick--Morris_Worm_pov_3 REMATCH_1--Hat_Trick--Morris_Worm_1_patched REMATCH_1--Hat_Trick--Morris_Worm_pov_1 REMATCH_1--Hat_Trick--Morris_Worm_pov_2 REMATCH_1--Hat_Trick--Morris_Worm_2 REMATCH_1--Hat_Trick--Morris_Worm_3_patched REMATCH_1--Hat_Trick--Morris_Worm_4 REMATCH_1--Hat_Trick--Morris_Worm_2_patched REMATCH_1--Hat_Trick--Morris_Worm_3 REMATCH_1--Hat_Trick--Morris_Worm_1 REMATCH_1--Hat_Trick--Morris_Worm_4_patched
