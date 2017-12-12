CHAL=KKVS

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/printf.c.o -c cb_2/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strdup.c.o -c cb_2/lib/strdup.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strchr.c.o -c cb_2/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/memmove.c.o -c cb_2/lib/memmove.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strcat.c.o -c cb_2/lib/strcat.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strcpy.c.o -c cb_2/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strcmp.c.o -c cb_2/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/ctype.c.o -c cb_2/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/memcpy.c.o -c cb_2/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/memcmp.c.o -c cb_2/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/malloc_common.c.o -c cb_2/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strsep.c.o -c cb_2/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/memchr.c.o -c cb_2/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/free.c.o -c cb_2/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strncpy.c.o -c cb_2/lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strncasecmp.c.o -c cb_2/lib/strncasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strncmp.c.o -c cb_2/lib/strncmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strcasecmp.c.o -c cb_2/lib/strcasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/calloc.c.o -c cb_2/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strtol.c.o -c cb_2/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/memset.c.o -c cb_2/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/realloc.c.o -c cb_2/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strlen.c.o -c cb_2/lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/src/main.c.o -c cb_2/src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/src/io.c.o -c cb_2/src/io.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/printf.c.o -c cb_1/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strdup.c.o -c cb_1/lib/strdup.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strchr.c.o -c cb_1/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/memmove.c.o -c cb_1/lib/memmove.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strcat.c.o -c cb_1/lib/strcat.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strcpy.c.o -c cb_1/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strcmp.c.o -c cb_1/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/ctype.c.o -c cb_1/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/memcpy.c.o -c cb_1/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/memcmp.c.o -c cb_1/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/malloc_common.c.o -c cb_1/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strsep.c.o -c cb_1/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/memchr.c.o -c cb_1/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/free.c.o -c cb_1/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strncpy.c.o -c cb_1/lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strncasecmp.c.o -c cb_1/lib/strncasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strncmp.c.o -c cb_1/lib/strncmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strcasecmp.c.o -c cb_1/lib/strcasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/calloc.c.o -c cb_1/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strtol.c.o -c cb_1/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/memset.c.o -c cb_1/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/realloc.c.o -c cb_1/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strlen.c.o -c cb_1/lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/src/main.c.o -c cb_1/src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/src/io.c.o -c cb_1/src/io.c
	$(CC) $(FLAGS) -o KKVS_1_patched cb_1/lib/printf.c.o cb_1/lib/strdup.c.o cb_1/lib/strchr.c.o cb_1/lib/memmove.c.o cb_1/lib/malloc.c.o cb_1/lib/strcat.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/free.c.o cb_1/lib/strncpy.c.o cb_1/lib/strncasecmp.c.o cb_1/lib/strncmp.c.o cb_1/lib/strcasecmp.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/main.c.o cb_1/src/io.c.o $(LCGC) 
	$(CC) $(FLAGS) -o KKVS_2_patched cb_2/lib/printf.c.o cb_2/lib/strdup.c.o cb_2/lib/strchr.c.o cb_2/lib/memmove.c.o cb_2/lib/malloc.c.o cb_2/lib/strcat.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/free.c.o cb_2/lib/strncpy.c.o cb_2/lib/strncasecmp.c.o cb_2/lib/strncmp.c.o cb_2/lib/strcasecmp.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/main.c.o cb_2/src/io.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/printf.c.o -c cb_2/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strdup.c.o -c cb_2/lib/strdup.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strchr.c.o -c cb_2/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/memmove.c.o -c cb_2/lib/memmove.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strcat.c.o -c cb_2/lib/strcat.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strcpy.c.o -c cb_2/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strcmp.c.o -c cb_2/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/ctype.c.o -c cb_2/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/memcpy.c.o -c cb_2/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/memcmp.c.o -c cb_2/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/malloc_common.c.o -c cb_2/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strsep.c.o -c cb_2/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/memchr.c.o -c cb_2/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/free.c.o -c cb_2/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strncpy.c.o -c cb_2/lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strncasecmp.c.o -c cb_2/lib/strncasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strncmp.c.o -c cb_2/lib/strncmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strcasecmp.c.o -c cb_2/lib/strcasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/calloc.c.o -c cb_2/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strtol.c.o -c cb_2/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/memset.c.o -c cb_2/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/realloc.c.o -c cb_2/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/lib/strlen.c.o -c cb_2/lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/src/main.c.o -c cb_2/src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -O0 -o cb_2/src/io.c.o -c cb_2/src/io.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/printf.c.o -c cb_1/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strdup.c.o -c cb_1/lib/strdup.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strchr.c.o -c cb_1/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/memmove.c.o -c cb_1/lib/memmove.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strcat.c.o -c cb_1/lib/strcat.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strcpy.c.o -c cb_1/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strcmp.c.o -c cb_1/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/ctype.c.o -c cb_1/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/memcpy.c.o -c cb_1/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/memcmp.c.o -c cb_1/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/malloc_common.c.o -c cb_1/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strsep.c.o -c cb_1/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/memchr.c.o -c cb_1/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/free.c.o -c cb_1/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strncpy.c.o -c cb_1/lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strncasecmp.c.o -c cb_1/lib/strncasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strncmp.c.o -c cb_1/lib/strncmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strcasecmp.c.o -c cb_1/lib/strcasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/calloc.c.o -c cb_1/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strtol.c.o -c cb_1/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/memset.c.o -c cb_1/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/realloc.c.o -c cb_1/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/lib/strlen.c.o -c cb_1/lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/src/main.c.o -c cb_1/src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -O0 -o cb_1/src/io.c.o -c cb_1/src/io.c
	$(CC) $(FLAGS) -o KKVS_1 cb_1/lib/printf.c.o cb_1/lib/strdup.c.o cb_1/lib/strchr.c.o cb_1/lib/memmove.c.o cb_1/lib/malloc.c.o cb_1/lib/strcat.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/free.c.o cb_1/lib/strncpy.c.o cb_1/lib/strncasecmp.c.o cb_1/lib/strncmp.c.o cb_1/lib/strcasecmp.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/main.c.o cb_1/src/io.c.o $(LCGC) 
	$(CC) $(FLAGS) -o KKVS_2 cb_2/lib/printf.c.o cb_2/lib/strdup.c.o cb_2/lib/strchr.c.o cb_2/lib/memmove.c.o cb_2/lib/malloc.c.o cb_2/lib/strcat.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/free.c.o cb_2/lib/strncpy.c.o cb_2/lib/strncasecmp.c.o cb_2/lib/strncmp.c.o cb_2/lib/strcasecmp.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/main.c.o cb_2/src/io.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -O0 -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -g -O0 -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(FLAGS) -o KKVS_pov_2 pov_2/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o KKVS_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov.c.o cb_2/lib/printf.c.o cb_2/lib/strdup.c.o cb_2/lib/strchr.c.o cb_2/lib/memmove.c.o cb_2/lib/malloc.c.o cb_2/lib/strcat.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/free.c.o cb_2/lib/strncpy.c.o cb_2/lib/strncasecmp.c.o cb_2/lib/strncmp.c.o cb_2/lib/strcasecmp.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/main.c.o cb_2/src/io.c.o cb_2/lib/printf.c.o cb_2/lib/strdup.c.o cb_2/lib/strchr.c.o cb_2/lib/memmove.c.o cb_2/lib/malloc.c.o cb_2/lib/strcat.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/free.c.o cb_2/lib/strncpy.c.o cb_2/lib/strncasecmp.c.o cb_2/lib/strncmp.c.o cb_2/lib/strcasecmp.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/main.c.o cb_2/src/io.c.o cb_1/lib/printf.c.o cb_1/lib/strdup.c.o cb_1/lib/strchr.c.o cb_1/lib/memmove.c.o cb_1/lib/malloc.c.o cb_1/lib/strcat.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/free.c.o cb_1/lib/strncpy.c.o cb_1/lib/strncasecmp.c.o cb_1/lib/strncmp.c.o cb_1/lib/strcasecmp.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/main.c.o cb_1/src/io.c.o pov_2/pov.c.o cb_1/lib/printf.c.o cb_1/lib/strdup.c.o cb_1/lib/strchr.c.o cb_1/lib/memmove.c.o cb_1/lib/malloc.c.o cb_1/lib/strcat.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/free.c.o cb_1/lib/strncpy.c.o cb_1/lib/strncasecmp.c.o cb_1/lib/strncmp.c.o cb_1/lib/strcasecmp.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/main.c.o cb_1/src/io.c.o KKVS_pov_1 KKVS_2_patched KKVS_2 KKVS_1_patched KKVS_pov_2 KKVS_1
