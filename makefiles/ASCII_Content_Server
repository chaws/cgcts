CHAL=ASCII_Content_Server

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/mymath.c.o -c lib/mymath.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/new_printf.c.o -c lib/new_printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/page.c.o -c src/page.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/tree.c.o -c src/tree.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/command.c.o -c src/command.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/error.c.o -c src/error.c
	$(CC) $(FLAGS) -o ASCII_Content_Server_patched lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/stdlib.c.o src/page.c.o src/service.c.o src/tree.c.o src/command.c.o src/error.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/mymath.c.o -c lib/mymath.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/new_printf.c.o -c lib/new_printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/page.c.o -c src/page.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/tree.c.o -c src/tree.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/command.c.o -c src/command.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/error.c.o -c src/error.c
	$(CC) $(FLAGS) -o ASCII_Content_Server lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/stdlib.c.o src/page.c.o src/service.c.o src/tree.c.o src/command.c.o src/error.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_5 -I include -I lib -I src -O0 -g -pedantic -o pov_5/pov.c.o -c pov_5/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -O0 -g -pedantic -o pov_3/pov.c.o -c pov_3/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_4 -I include -I lib -I src -O0 -g -pedantic -o pov_4/pov.c.o -c pov_4/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(FLAGS) -o ASCII_Content_Server_pov_4 pov_4/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o ASCII_Content_Server_pov_5 pov_5/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o ASCII_Content_Server_pov_2 pov_2/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o ASCII_Content_Server_pov_3 pov_3/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o ASCII_Content_Server_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_5/pov.c.o pov_3/pov.c.o pov_4/pov.c.o pov_2/pov.c.o pov_1/pov.c.o lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/stdlib.c.o src/page.c.o src/service.c.o src/tree.c.o src/command.c.o src/error.c.o lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/stdlib.c.o src/page.c.o src/service.c.o src/tree.c.o src/command.c.o src/error.c.o ASCII_Content_Server_pov_5 ASCII_Content_Server_pov_3 ASCII_Content_Server_pov_4 ASCII_Content_Server_pov_2 ASCII_Content_Server_pov_1 ASCII_Content_Server_patched ASCII_Content_Server
