CHAL=ShoutCTF

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/printf.c.o -c lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strdup.c.o -c lib/strdup.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strchr.c.o -c lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/memmove.c.o -c lib/memmove.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strcpy.c.o -c lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strcmp.c.o -c lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/exit.c.o -c lib/exit.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strndup.c.o -c lib/strndup.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/memcmp.c.o -c lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/malloc_common.c.o -c lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/fread.c.o -c lib/fread.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strsep.c.o -c lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/memchr.c.o -c lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/fxlat.c.o -c lib/fxlat.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strcasestr.c.o -c lib/strcasestr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strtoul.c.o -c lib/strtoul.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/free.c.o -c lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strncpy.c.o -c lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strncasecmp.c.o -c lib/strncasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/fwrite.c.o -c lib/fwrite.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strcasecmp.c.o -c lib/strcasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/fflush.c.o -c lib/fflush.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/fopen.c.o -c lib/fopen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/calloc.c.o -c lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strtol.c.o -c lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strstr.c.o -c lib/strstr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/realloc.c.o -c lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strlen.c.o -c lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o src/flgmgr.c.o -c src/flgmgr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o src/user.c.o -c src/user.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o src/ctf.c.o -c src/ctf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o src/error.c.o -c src/error.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o src/challenge.c.o -c src/challenge.c
	$(CC) $(FLAGS) -o ShoutCTF_patched lib/printf.c.o lib/strdup.c.o lib/strchr.c.o lib/memmove.c.o lib/malloc.c.o lib/strcpy.c.o lib/strcmp.c.o lib/ctype.c.o lib/exit.c.o lib/memcpy.c.o lib/strndup.c.o lib/memcmp.c.o lib/malloc_common.c.o lib/fread.c.o lib/strsep.c.o lib/memchr.c.o lib/fxlat.c.o lib/strcasestr.c.o lib/strtoul.c.o lib/free.c.o lib/stdio.c.o lib/strncpy.c.o lib/strncasecmp.c.o lib/fwrite.c.o lib/strcasecmp.c.o lib/fflush.c.o lib/fopen.c.o lib/calloc.c.o lib/strtol.c.o lib/memset.c.o lib/strstr.c.o lib/realloc.c.o lib/strlen.c.o src/flgmgr.c.o src/user.c.o src/service.c.o src/ctf.c.o src/error.c.o src/challenge.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/printf.c.o -c lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strdup.c.o -c lib/strdup.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strchr.c.o -c lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/memmove.c.o -c lib/memmove.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strcpy.c.o -c lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strcmp.c.o -c lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/exit.c.o -c lib/exit.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strndup.c.o -c lib/strndup.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/memcmp.c.o -c lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/malloc_common.c.o -c lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/fread.c.o -c lib/fread.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strsep.c.o -c lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/memchr.c.o -c lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/fxlat.c.o -c lib/fxlat.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strcasestr.c.o -c lib/strcasestr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strtoul.c.o -c lib/strtoul.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/free.c.o -c lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strncpy.c.o -c lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strncasecmp.c.o -c lib/strncasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/fwrite.c.o -c lib/fwrite.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strcasecmp.c.o -c lib/strcasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/fflush.c.o -c lib/fflush.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/fopen.c.o -c lib/fopen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/calloc.c.o -c lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strtol.c.o -c lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strstr.c.o -c lib/strstr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/realloc.c.o -c lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o lib/strlen.c.o -c lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o src/flgmgr.c.o -c src/flgmgr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o src/user.c.o -c src/user.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o src/ctf.c.o -c src/ctf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o src/error.c.o -c src/error.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O3 -g -DPRINTF_CHAR=59 -o src/challenge.c.o -c src/challenge.c
	$(CC) $(FLAGS) -o ShoutCTF lib/printf.c.o lib/strdup.c.o lib/strchr.c.o lib/memmove.c.o lib/malloc.c.o lib/strcpy.c.o lib/strcmp.c.o lib/ctype.c.o lib/exit.c.o lib/memcpy.c.o lib/strndup.c.o lib/memcmp.c.o lib/malloc_common.c.o lib/fread.c.o lib/strsep.c.o lib/memchr.c.o lib/fxlat.c.o lib/strcasestr.c.o lib/strtoul.c.o lib/free.c.o lib/stdio.c.o lib/strncpy.c.o lib/strncasecmp.c.o lib/fwrite.c.o lib/strcasecmp.c.o lib/fflush.c.o lib/fopen.c.o lib/calloc.c.o lib/strtol.c.o lib/memset.c.o lib/strstr.c.o lib/realloc.c.o lib/strlen.c.o src/flgmgr.c.o src/user.c.o src/service.c.o src/ctf.c.o src/error.c.o src/challenge.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O3 -g -DPRINTF_CHAR=59 -pedantic -O0 -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O3 -g -DPRINTF_CHAR=59 -pedantic -O0 -o pov_1/xlat.c.o -c pov_1/xlat.c
	$(CC) $(FLAGS) -o ShoutCTF_pov_1 pov_1/pov.c.o pov_1/xlat.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov.c.o pov_1/xlat.c.o lib/printf.c.o lib/strdup.c.o lib/strchr.c.o lib/memmove.c.o lib/malloc.c.o lib/strcpy.c.o lib/strcmp.c.o lib/ctype.c.o lib/exit.c.o lib/memcpy.c.o lib/strndup.c.o lib/memcmp.c.o lib/malloc_common.c.o lib/fread.c.o lib/strsep.c.o lib/memchr.c.o lib/fxlat.c.o lib/strcasestr.c.o lib/strtoul.c.o lib/free.c.o lib/stdio.c.o lib/strncpy.c.o lib/strncasecmp.c.o lib/fwrite.c.o lib/strcasecmp.c.o lib/fflush.c.o lib/fopen.c.o lib/calloc.c.o lib/strtol.c.o lib/memset.c.o lib/strstr.c.o lib/realloc.c.o lib/strlen.c.o src/flgmgr.c.o src/user.c.o src/service.c.o src/ctf.c.o src/error.c.o src/challenge.c.o lib/printf.c.o lib/strdup.c.o lib/strchr.c.o lib/memmove.c.o lib/malloc.c.o lib/strcpy.c.o lib/strcmp.c.o lib/ctype.c.o lib/exit.c.o lib/memcpy.c.o lib/strndup.c.o lib/memcmp.c.o lib/malloc_common.c.o lib/fread.c.o lib/strsep.c.o lib/memchr.c.o lib/fxlat.c.o lib/strcasestr.c.o lib/strtoul.c.o lib/free.c.o lib/stdio.c.o lib/strncpy.c.o lib/strncasecmp.c.o lib/fwrite.c.o lib/strcasecmp.c.o lib/fflush.c.o lib/fopen.c.o lib/calloc.c.o lib/strtol.c.o lib/memset.c.o lib/strstr.c.o lib/realloc.c.o lib/strlen.c.o src/flgmgr.c.o src/user.c.o src/service.c.o src/ctf.c.o src/error.c.o src/challenge.c.o ShoutCTF_pov_1 ShoutCTF_patched ShoutCTF
