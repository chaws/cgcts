CHAL=REMATCH_4--CGCRPC_Server--MS08-067

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/fs.c.o -c lib/fs.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/cgcmb.c.o -c src/cgcmb.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/cgcrpc.c.o -c src/cgcrpc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/user.c.o -c src/user.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/fs.c.o -c src/fs.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/transport.c.o -c src/transport.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O0 -g -o src/netstuff.c.o -c src/netstuff.c
	$(CC) $(FLAGS) -o REMATCH_4--CGCRPC_Server--MS08-067_patched lib/malloc.c.o lib/ctype.c.o lib/fs.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/cgcmb.c.o src/cgcrpc.c.o src/user.c.o src/fs.c.o src/service.c.o src/transport.c.o src/netstuff.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/fs.c.o -c lib/fs.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/cgcmb.c.o -c src/cgcmb.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/cgcrpc.c.o -c src/cgcrpc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/user.c.o -c src/user.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/fs.c.o -c src/fs.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/transport.c.o -c src/transport.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/netstuff.c.o -c src/netstuff.c
	$(CC) $(FLAGS) -o REMATCH_4--CGCRPC_Server--MS08-067 lib/malloc.c.o lib/ctype.c.o lib/fs.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/cgcmb.c.o src/cgcrpc.c.o src/user.c.o src/fs.c.o src/service.c.o src/transport.c.o src/netstuff.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov_1.c.o -c pov_1/pov_1.c
	$(CC) $(FLAGS) -o REMATCH_4--CGCRPC_Server--MS08-067_pov_1 pov_1/pov_1.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov_1.c.o lib/malloc.c.o lib/ctype.c.o lib/fs.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/cgcmb.c.o src/cgcrpc.c.o src/user.c.o src/fs.c.o src/service.c.o src/transport.c.o src/netstuff.c.o lib/malloc.c.o lib/ctype.c.o lib/fs.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o src/cgcmb.c.o src/cgcrpc.c.o src/user.c.o src/fs.c.o src/service.c.o src/transport.c.o src/netstuff.c.o REMATCH_4--CGCRPC_Server--MS08-067_pov_1 REMATCH_4--CGCRPC_Server--MS08-067_patched REMATCH_4--CGCRPC_Server--MS08-067
