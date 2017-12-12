CHAL=commerce_webscale

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/printf.c.o -c cb_2/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/strchr.c.o -c cb_2/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/strcpy.c.o -c cb_2/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/strcmp.c.o -c cb_2/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/ctype.c.o -c cb_2/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/memcpy.c.o -c cb_2/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/memcmp.c.o -c cb_2/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/malloc_common.c.o -c cb_2/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/strsep.c.o -c cb_2/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/memchr.c.o -c cb_2/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/free.c.o -c cb_2/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/calloc.c.o -c cb_2/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/strtol.c.o -c cb_2/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/memset.c.o -c cb_2/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/realloc.c.o -c cb_2/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/strlen.c.o -c cb_2/lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/src/db_server.c.o -c cb_2/src/db_server.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/src/db_xdr.c.o -c cb_2/src/db_xdr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/src/main.c.o -c cb_2/src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/src/rpc_xdr.c.o -c cb_2/src/rpc_xdr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/src/tree.c.o -c cb_2/src/tree.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/src/librpc.c.o -c cb_2/src/librpc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/printf.c.o -c cb_1/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/strchr.c.o -c cb_1/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/strcpy.c.o -c cb_1/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/strcmp.c.o -c cb_1/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/ctype.c.o -c cb_1/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/memcpy.c.o -c cb_1/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/memcmp.c.o -c cb_1/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/malloc_common.c.o -c cb_1/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/strsep.c.o -c cb_1/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/memchr.c.o -c cb_1/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/free.c.o -c cb_1/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/calloc.c.o -c cb_1/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/strtol.c.o -c cb_1/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/memset.c.o -c cb_1/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/realloc.c.o -c cb_1/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/strlen.c.o -c cb_1/lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/src/db_client.c.o -c cb_1/src/db_client.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/src/db_xdr.c.o -c cb_1/src/db_xdr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/src/main.c.o -c cb_1/src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/src/rpc_xdr.c.o -c cb_1/src/rpc_xdr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/src/librpc.c.o -c cb_1/src/librpc.c
	$(CC) $(FLAGS) -o commerce_webscale_2_patched cb_2/lib/printf.c.o cb_2/lib/strchr.c.o cb_2/lib/malloc.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/free.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/db_server.c.o cb_2/src/db_xdr.c.o cb_2/src/main.c.o cb_2/src/rpc_xdr.c.o cb_2/src/tree.c.o cb_2/src/librpc.c.o $(LCGC) 
	$(CC) $(FLAGS) -o commerce_webscale_1_patched cb_1/lib/printf.c.o cb_1/lib/strchr.c.o cb_1/lib/malloc.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/free.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/db_client.c.o cb_1/src/db_xdr.c.o cb_1/src/main.c.o cb_1/src/rpc_xdr.c.o cb_1/src/librpc.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/printf.c.o -c cb_2/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/strchr.c.o -c cb_2/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/strcpy.c.o -c cb_2/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/strcmp.c.o -c cb_2/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/ctype.c.o -c cb_2/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/memcpy.c.o -c cb_2/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/memcmp.c.o -c cb_2/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/malloc_common.c.o -c cb_2/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/strsep.c.o -c cb_2/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/memchr.c.o -c cb_2/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/free.c.o -c cb_2/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/calloc.c.o -c cb_2/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/strtol.c.o -c cb_2/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/memset.c.o -c cb_2/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/realloc.c.o -c cb_2/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/lib/strlen.c.o -c cb_2/lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/src/db_server.c.o -c cb_2/src/db_server.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/src/db_xdr.c.o -c cb_2/src/db_xdr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/src/main.c.o -c cb_2/src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/src/rpc_xdr.c.o -c cb_2/src/rpc_xdr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/src/tree.c.o -c cb_2/src/tree.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_2/src/librpc.c.o -c cb_2/src/librpc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/printf.c.o -c cb_1/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/strchr.c.o -c cb_1/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/strcpy.c.o -c cb_1/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/strcmp.c.o -c cb_1/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/ctype.c.o -c cb_1/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/memcpy.c.o -c cb_1/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/memcmp.c.o -c cb_1/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/malloc_common.c.o -c cb_1/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/strsep.c.o -c cb_1/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/memchr.c.o -c cb_1/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/free.c.o -c cb_1/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/calloc.c.o -c cb_1/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/strtol.c.o -c cb_1/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/memset.c.o -c cb_1/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/realloc.c.o -c cb_1/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/lib/strlen.c.o -c cb_1/lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/src/db_client.c.o -c cb_1/src/db_client.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/src/db_xdr.c.o -c cb_1/src/db_xdr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/src/main.c.o -c cb_1/src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/src/rpc_xdr.c.o -c cb_1/src/rpc_xdr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O3 -g -DDB_CURRENT -fno-strict-aliasing -o cb_1/src/librpc.c.o -c cb_1/src/librpc.c
	$(CC) $(FLAGS) -o commerce_webscale_2 cb_2/lib/printf.c.o cb_2/lib/strchr.c.o cb_2/lib/malloc.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/free.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/db_server.c.o cb_2/src/db_xdr.c.o cb_2/src/main.c.o cb_2/src/rpc_xdr.c.o cb_2/src/tree.c.o cb_2/src/librpc.c.o $(LCGC) 
	$(CC) $(FLAGS) -o commerce_webscale_1 cb_1/lib/printf.c.o cb_1/lib/strchr.c.o cb_1/lib/malloc.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/free.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/db_client.c.o cb_1/src/db_xdr.c.o cb_1/src/main.c.o cb_1/src/rpc_xdr.c.o cb_1/src/librpc.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O3 -g -DDB_CURRENT -fno-strict-aliasing -pedantic -O0 -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O3 -g -DDB_CURRENT -fno-strict-aliasing -pedantic -O0 -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(FLAGS) -o commerce_webscale_pov_1 pov_1/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o commerce_webscale_pov_2 pov_2/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov.c.o pov_1/pov.c.o cb_2/lib/printf.c.o cb_2/lib/strchr.c.o cb_2/lib/malloc.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/free.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/db_server.c.o cb_2/src/db_xdr.c.o cb_2/src/main.c.o cb_2/src/rpc_xdr.c.o cb_2/src/tree.c.o cb_2/src/librpc.c.o cb_2/lib/printf.c.o cb_2/lib/strchr.c.o cb_2/lib/malloc.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/free.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/db_server.c.o cb_2/src/db_xdr.c.o cb_2/src/main.c.o cb_2/src/rpc_xdr.c.o cb_2/src/tree.c.o cb_2/src/librpc.c.o cb_1/lib/printf.c.o cb_1/lib/strchr.c.o cb_1/lib/malloc.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/free.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/db_client.c.o cb_1/src/db_xdr.c.o cb_1/src/main.c.o cb_1/src/rpc_xdr.c.o cb_1/src/librpc.c.o cb_1/lib/printf.c.o cb_1/lib/strchr.c.o cb_1/lib/malloc.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/free.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/db_client.c.o cb_1/src/db_xdr.c.o cb_1/src/main.c.o cb_1/src/rpc_xdr.c.o cb_1/src/librpc.c.o commerce_webscale_pov_2 commerce_webscale_pov_1 commerce_webscale_2_patched commerce_webscale_2 commerce_webscale_1_patched commerce_webscale_1
