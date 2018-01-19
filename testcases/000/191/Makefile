CHAL=pizza_ordering_system

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/printf.c.o -c lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strdup.c.o -c lib/strdup.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strchr.c.o -c lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/memmove.c.o -c lib/memmove.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strcat.c.o -c lib/strcat.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strcpy.c.o -c lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strcmp.c.o -c lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/memcmp.c.o -c lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/malloc_common.c.o -c lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strsep.c.o -c lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/memchr.c.o -c lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/free.c.o -c lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strncpy.c.o -c lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strncasecmp.c.o -c lib/strncasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strncmp.c.o -c lib/strncmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strcasecmp.c.o -c lib/strcasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/calloc.c.o -c lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strtol.c.o -c lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/realloc.c.o -c lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strlen.c.o -c lib/strlen.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/pizza.cc.o -c src/pizza.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/orderiomanager.cc.o -c src/orderiomanager.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/pizzaiomanager.cc.o -c src/pizzaiomanager.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/order.cc.o -c src/order.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/iomanager.cc.o -c src/iomanager.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/pizzabowl.cc.o -c src/pizzabowl.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/sauce.cc.o -c src/sauce.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/topping.cc.o -c src/topping.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/meat.cc.o -c src/meat.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/cheese.cc.o -c src/cheese.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/pizzapie.cc.o -c src/pizzapie.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/pizzasub.cc.o -c src/pizzasub.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/main.cc.o -c src/main.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/veggie.cc.o -c src/veggie.cc
	$(CXX) $(FLAGS) -o pizza_ordering_system_patched lib/printf.c.o lib/strdup.c.o lib/strchr.c.o lib/memmove.c.o lib/malloc.c.o lib/strcat.c.o lib/strcpy.c.o lib/strcmp.c.o lib/ctype.c.o lib/memcpy.c.o lib/memcmp.c.o lib/malloc_common.c.o lib/strsep.c.o lib/memchr.c.o lib/free.c.o lib/strncpy.c.o lib/strncasecmp.c.o lib/strncmp.c.o lib/strcasecmp.c.o lib/calloc.c.o lib/strtol.c.o lib/memset.c.o lib/realloc.c.o lib/strlen.c.o src/pizza.cc.o src/orderiomanager.cc.o src/pizzaiomanager.cc.o src/order.cc.o src/iomanager.cc.o src/pizzabowl.cc.o src/sauce.cc.o src/topping.cc.o src/meat.cc.o src/cheese.cc.o src/pizzapie.cc.o src/pizzasub.cc.o src/main.cc.o src/veggie.cc.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/printf.c.o -c lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strdup.c.o -c lib/strdup.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strchr.c.o -c lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/memmove.c.o -c lib/memmove.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strcat.c.o -c lib/strcat.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strcpy.c.o -c lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strcmp.c.o -c lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/ctype.c.o -c lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/memcpy.c.o -c lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/memcmp.c.o -c lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/malloc_common.c.o -c lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strsep.c.o -c lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/memchr.c.o -c lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/free.c.o -c lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strncpy.c.o -c lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strncasecmp.c.o -c lib/strncasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strncmp.c.o -c lib/strncmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strcasecmp.c.o -c lib/strcasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/calloc.c.o -c lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strtol.c.o -c lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/memset.c.o -c lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/realloc.c.o -c lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -g -o lib/strlen.c.o -c lib/strlen.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/pizza.cc.o -c src/pizza.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/orderiomanager.cc.o -c src/orderiomanager.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/pizzaiomanager.cc.o -c src/pizzaiomanager.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/order.cc.o -c src/order.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/iomanager.cc.o -c src/iomanager.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/pizzabowl.cc.o -c src/pizzabowl.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/sauce.cc.o -c src/sauce.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/topping.cc.o -c src/topping.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/meat.cc.o -c src/meat.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/cheese.cc.o -c src/cheese.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/pizzapie.cc.o -c src/pizzapie.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/pizzasub.cc.o -c src/pizzasub.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/main.cc.o -c src/main.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -O0 -o src/veggie.cc.o -c src/veggie.cc
	$(CXX) $(FLAGS) -o pizza_ordering_system lib/printf.c.o lib/strdup.c.o lib/strchr.c.o lib/memmove.c.o lib/malloc.c.o lib/strcat.c.o lib/strcpy.c.o lib/strcmp.c.o lib/ctype.c.o lib/memcpy.c.o lib/memcmp.c.o lib/malloc_common.c.o lib/strsep.c.o lib/memchr.c.o lib/free.c.o lib/strncpy.c.o lib/strncasecmp.c.o lib/strncmp.c.o lib/strcasecmp.c.o lib/calloc.c.o lib/strtol.c.o lib/memset.c.o lib/realloc.c.o lib/strlen.c.o src/pizza.cc.o src/orderiomanager.cc.o src/pizzaiomanager.cc.o src/order.cc.o src/iomanager.cc.o src/pizzabowl.cc.o src/sauce.cc.o src/topping.cc.o src/meat.cc.o src/cheese.cc.o src/pizzapie.cc.o src/pizzasub.cc.o src/main.cc.o src/veggie.cc.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -fno-exceptions -fno-rtti -O0 -g -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -fno-exceptions -fno-rtti -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -fno-exceptions -fno-rtti -O0 -g -pedantic -o pov_3/pov.c.o -c pov_3/pov.c
	$(CXX) $(FLAGS) -o pizza_ordering_system_pov_3 pov_3/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o pizza_ordering_system_pov_2 pov_2/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o pizza_ordering_system_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov.c.o pov_1/pov.c.o lib/printf.c.o lib/strdup.c.o lib/strchr.c.o lib/memmove.c.o lib/malloc.c.o lib/strcat.c.o lib/strcpy.c.o lib/strcmp.c.o lib/ctype.c.o lib/memcpy.c.o lib/memcmp.c.o lib/malloc_common.c.o lib/strsep.c.o lib/memchr.c.o lib/free.c.o lib/strncpy.c.o lib/strncasecmp.c.o lib/strncmp.c.o lib/strcasecmp.c.o lib/calloc.c.o lib/strtol.c.o lib/memset.c.o lib/realloc.c.o lib/strlen.c.o src/pizza.cc.o src/orderiomanager.cc.o src/pizzaiomanager.cc.o src/order.cc.o src/iomanager.cc.o src/pizzabowl.cc.o src/sauce.cc.o src/topping.cc.o src/meat.cc.o src/cheese.cc.o src/pizzapie.cc.o src/pizzasub.cc.o src/main.cc.o src/veggie.cc.o pov_3/pov.c.o lib/printf.c.o lib/strdup.c.o lib/strchr.c.o lib/memmove.c.o lib/malloc.c.o lib/strcat.c.o lib/strcpy.c.o lib/strcmp.c.o lib/ctype.c.o lib/memcpy.c.o lib/memcmp.c.o lib/malloc_common.c.o lib/strsep.c.o lib/memchr.c.o lib/free.c.o lib/strncpy.c.o lib/strncasecmp.c.o lib/strncmp.c.o lib/strcasecmp.c.o lib/calloc.c.o lib/strtol.c.o lib/memset.c.o lib/realloc.c.o lib/strlen.c.o src/pizza.cc.o src/orderiomanager.cc.o src/pizzaiomanager.cc.o src/order.cc.o src/iomanager.cc.o src/pizzabowl.cc.o src/sauce.cc.o src/topping.cc.o src/meat.cc.o src/cheese.cc.o src/pizzapie.cc.o src/pizzasub.cc.o src/main.cc.o src/veggie.cc.o pizza_ordering_system_pov_2 pizza_ordering_system_pov_1 pizza_ordering_system_patched pizza_ordering_system_pov_3 pizza_ordering_system
