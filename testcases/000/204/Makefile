CHAL=online_job_application2

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/printf.c.o -c lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/strchr.c.o -c lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/strcat.c.o -c lib/strcat.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/strcpy.c.o -c lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/strcmp.c.o -c lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/memcmp.c.o -c lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/malloc_common.c.o -c lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/strsep.c.o -c lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/memchr.c.o -c lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/free.c.o -c lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/strncasecmp.c.o -c lib/strncasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/strncmp.c.o -c lib/strncmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/strcasecmp.c.o -c lib/strcasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/calloc.c.o -c lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/strtol.c.o -c lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/realloc.c.o -c lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o lib/strlen.c.o -c lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o src/main.c.o -c src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o src/ab12.c.o -c src/ab12.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o src/form.c.o -c src/form.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O1 -g -o src/input.c.o -c src/input.c
	$(CC) $(FLAGS) -o online_job_application2_patched lib/printf.c.o lib/strchr.c.o lib/malloc.c.o lib/strcat.c.o lib/strcpy.c.o lib/strcmp.c.o lib/ctype.c.o lib/memcpy.c.o lib/memcmp.c.o lib/malloc_common.c.o lib/strsep.c.o lib/memchr.c.o lib/free.c.o lib/strncasecmp.c.o lib/strncmp.c.o lib/strcasecmp.c.o lib/calloc.c.o lib/strtol.c.o lib/memset.c.o lib/realloc.c.o lib/strlen.c.o src/main.c.o src/ab12.c.o src/form.c.o src/input.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/printf.c.o -c lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/strchr.c.o -c lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/strcat.c.o -c lib/strcat.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/strcpy.c.o -c lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/strcmp.c.o -c lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/memcmp.c.o -c lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/malloc_common.c.o -c lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/strsep.c.o -c lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/memchr.c.o -c lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/free.c.o -c lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/strncasecmp.c.o -c lib/strncasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/strncmp.c.o -c lib/strncmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/strcasecmp.c.o -c lib/strcasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/calloc.c.o -c lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/strtol.c.o -c lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/realloc.c.o -c lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o lib/strlen.c.o -c lib/strlen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o src/main.c.o -c src/main.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o src/ab12.c.o -c src/ab12.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o src/form.c.o -c src/form.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O1 -g -o src/input.c.o -c src/input.c
	$(CC) $(FLAGS) -o online_job_application2 lib/printf.c.o lib/strchr.c.o lib/malloc.c.o lib/strcat.c.o lib/strcpy.c.o lib/strcmp.c.o lib/ctype.c.o lib/memcpy.c.o lib/memcmp.c.o lib/malloc_common.c.o lib/strsep.c.o lib/memchr.c.o lib/free.c.o lib/strncasecmp.c.o lib/strncmp.c.o lib/strcasecmp.c.o lib/calloc.c.o lib/strtol.c.o lib/memset.c.o lib/realloc.c.o lib/strlen.c.o src/main.c.o src/ab12.c.o src/form.c.o src/input.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O1 -g -pedantic -O0 -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(FLAGS) -o online_job_application2_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov.c.o lib/printf.c.o lib/strchr.c.o lib/malloc.c.o lib/strcat.c.o lib/strcpy.c.o lib/strcmp.c.o lib/ctype.c.o lib/memcpy.c.o lib/memcmp.c.o lib/malloc_common.c.o lib/strsep.c.o lib/memchr.c.o lib/free.c.o lib/strncasecmp.c.o lib/strncmp.c.o lib/strcasecmp.c.o lib/calloc.c.o lib/strtol.c.o lib/memset.c.o lib/realloc.c.o lib/strlen.c.o src/main.c.o src/ab12.c.o src/form.c.o src/input.c.o lib/printf.c.o lib/strchr.c.o lib/malloc.c.o lib/strcat.c.o lib/strcpy.c.o lib/strcmp.c.o lib/ctype.c.o lib/memcpy.c.o lib/memcmp.c.o lib/malloc_common.c.o lib/strsep.c.o lib/memchr.c.o lib/free.c.o lib/strncasecmp.c.o lib/strncmp.c.o lib/strcasecmp.c.o lib/calloc.c.o lib/strtol.c.o lib/memset.c.o lib/realloc.c.o lib/strlen.c.o src/main.c.o src/ab12.c.o src/form.c.o src/input.c.o online_job_application2_pov_1 online_job_application2_patched online_job_application2
