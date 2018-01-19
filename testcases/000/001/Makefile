CHAL=LulzChat

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/printf.c.o -c cb_1/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/strchr.c.o -c cb_1/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/strcpy.c.o -c cb_1/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/strcmp.c.o -c cb_1/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/ctype.c.o -c cb_1/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/memcpy.c.o -c cb_1/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/memcmp.c.o -c cb_1/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/malloc_common.c.o -c cb_1/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/strsep.c.o -c cb_1/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/memchr.c.o -c cb_1/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/free.c.o -c cb_1/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/strncpy.c.o -c cb_1/lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/calloc.c.o -c cb_1/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/strtol.c.o -c cb_1/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/memset.c.o -c cb_1/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/realloc.c.o -c cb_1/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/strlen.c.o -c cb_1/lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/coffee.c.o -c cb_1/src/coffee.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/main.c.o -c cb_1/src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/response.c.o -c cb_1/src/response.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/user.c.o -c cb_1/src/user.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/packet.c.o -c cb_1/src/packet.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/msg_queue.c.o -c cb_1/src/msg_queue.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/message.c.o -c cb_1/src/message.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/printf.c.o -c cb_2/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/strchr.c.o -c cb_2/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/strcpy.c.o -c cb_2/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/strcmp.c.o -c cb_2/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/ctype.c.o -c cb_2/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/memcpy.c.o -c cb_2/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/memcmp.c.o -c cb_2/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/malloc_common.c.o -c cb_2/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/strsep.c.o -c cb_2/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/memchr.c.o -c cb_2/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/free.c.o -c cb_2/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/strncpy.c.o -c cb_2/lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/calloc.c.o -c cb_2/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/strtol.c.o -c cb_2/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/memset.c.o -c cb_2/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/realloc.c.o -c cb_2/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/strlen.c.o -c cb_2/lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/coffee.c.o -c cb_2/src/coffee.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/main.c.o -c cb_2/src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/response.c.o -c cb_2/src/response.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/user.c.o -c cb_2/src/user.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/packet.c.o -c cb_2/src/packet.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/msg_queue.c.o -c cb_2/src/msg_queue.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/message.c.o -c cb_2/src/message.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/request.c.o -c cb_2/src/request.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/util.c.o -c cb_2/src/util.c
	$(CXX) $(FLAGS) -o LulzChat_2_patched cb_2/lib/printf.c.o cb_2/lib/strchr.c.o cb_2/lib/malloc.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/free.c.o cb_2/lib/strncpy.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/coffee.c.o cb_2/src/main.c.o cb_2/src/response.c.o cb_2/src/user.c.o cb_2/src/packet.c.o cb_2/src/msg_queue.c.o cb_2/src/message.c.o cb_2/src/request.c.o cb_2/src/util.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o LulzChat_1_patched cb_1/lib/printf.c.o cb_1/lib/strchr.c.o cb_1/lib/malloc.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/free.c.o cb_1/lib/strncpy.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/coffee.c.o cb_1/src/main.c.o cb_1/src/response.c.o cb_1/src/user.c.o cb_1/src/packet.c.o cb_1/src/msg_queue.c.o cb_1/src/message.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/printf.c.o -c cb_2/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/strchr.c.o -c cb_2/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/strcpy.c.o -c cb_2/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/strcmp.c.o -c cb_2/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/ctype.c.o -c cb_2/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/memcpy.c.o -c cb_2/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/memcmp.c.o -c cb_2/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/malloc_common.c.o -c cb_2/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/strsep.c.o -c cb_2/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/memchr.c.o -c cb_2/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/free.c.o -c cb_2/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/strncpy.c.o -c cb_2/lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/calloc.c.o -c cb_2/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/strtol.c.o -c cb_2/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/memset.c.o -c cb_2/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/realloc.c.o -c cb_2/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/strlen.c.o -c cb_2/lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/coffee.c.o -c cb_2/src/coffee.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/main.c.o -c cb_2/src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/response.c.o -c cb_2/src/response.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/user.c.o -c cb_2/src/user.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/packet.c.o -c cb_2/src/packet.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/msg_queue.c.o -c cb_2/src/msg_queue.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/message.c.o -c cb_2/src/message.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/request.c.o -c cb_2/src/request.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/util.c.o -c cb_2/src/util.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/printf.c.o -c cb_1/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/strchr.c.o -c cb_1/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/strcpy.c.o -c cb_1/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/strcmp.c.o -c cb_1/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/ctype.c.o -c cb_1/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/memcpy.c.o -c cb_1/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/memcmp.c.o -c cb_1/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/malloc_common.c.o -c cb_1/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/strsep.c.o -c cb_1/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/memchr.c.o -c cb_1/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/free.c.o -c cb_1/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/strncpy.c.o -c cb_1/lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/calloc.c.o -c cb_1/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/strtol.c.o -c cb_1/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/memset.c.o -c cb_1/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/realloc.c.o -c cb_1/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/strlen.c.o -c cb_1/lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/coffee.c.o -c cb_1/src/coffee.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/main.c.o -c cb_1/src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/response.c.o -c cb_1/src/response.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/user.c.o -c cb_1/src/user.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/packet.c.o -c cb_1/src/packet.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/msg_queue.c.o -c cb_1/src/msg_queue.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/message.c.o -c cb_1/src/message.c
	$(CXX) $(FLAGS) -o LulzChat_2 cb_2/lib/printf.c.o cb_2/lib/strchr.c.o cb_2/lib/malloc.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/free.c.o cb_2/lib/strncpy.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/coffee.c.o cb_2/src/main.c.o cb_2/src/response.c.o cb_2/src/user.c.o cb_2/src/packet.c.o cb_2/src/msg_queue.c.o cb_2/src/message.c.o cb_2/src/request.c.o cb_2/src/util.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o LulzChat_1 cb_1/lib/printf.c.o cb_1/lib/strchr.c.o cb_1/lib/malloc.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/free.c.o cb_1/lib/strncpy.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/coffee.c.o cb_1/src/main.c.o cb_1/src/response.c.o cb_1/src/user.c.o cb_1/src/packet.c.o cb_1/src/msg_queue.c.o cb_1/src/message.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CXX) $(FLAGS) -o LulzChat_pov_1 pov_1/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o LulzChat_pov_2 pov_2/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov.c.o pov_1/pov.c.o cb_2/lib/printf.c.o cb_2/lib/strchr.c.o cb_2/lib/malloc.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/free.c.o cb_2/lib/strncpy.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/coffee.c.o cb_2/src/main.c.o cb_2/src/response.c.o cb_2/src/user.c.o cb_2/src/packet.c.o cb_2/src/msg_queue.c.o cb_2/src/message.c.o cb_2/src/request.c.o cb_2/src/util.c.o cb_1/lib/printf.c.o cb_1/lib/strchr.c.o cb_1/lib/malloc.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/free.c.o cb_1/lib/strncpy.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/coffee.c.o cb_1/src/main.c.o cb_1/src/response.c.o cb_1/src/user.c.o cb_1/src/packet.c.o cb_1/src/msg_queue.c.o cb_1/src/message.c.o cb_2/lib/printf.c.o cb_2/lib/strchr.c.o cb_2/lib/malloc.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/free.c.o cb_2/lib/strncpy.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/coffee.c.o cb_2/src/main.c.o cb_2/src/response.c.o cb_2/src/user.c.o cb_2/src/packet.c.o cb_2/src/msg_queue.c.o cb_2/src/message.c.o cb_2/src/request.c.o cb_2/src/util.c.o cb_1/lib/printf.c.o cb_1/lib/strchr.c.o cb_1/lib/malloc.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/free.c.o cb_1/lib/strncpy.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/coffee.c.o cb_1/src/main.c.o cb_1/src/response.c.o cb_1/src/user.c.o cb_1/src/packet.c.o cb_1/src/msg_queue.c.o cb_1/src/message.c.o LulzChat_pov_2 LulzChat_pov_1 LulzChat_2 LulzChat_1_patched LulzChat_2_patched LulzChat_1
