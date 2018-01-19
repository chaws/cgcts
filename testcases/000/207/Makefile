CHAL=Recipe_Database

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/get_ingredients.c.o -c src/get_ingredients.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/find_recipe.c.o -c src/find_recipe.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/print_recipe.c.o -c src/print_recipe.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/split_ingredients.c.o -c src/split_ingredients.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/sort_shopping_list.c.o -c src/sort_shopping_list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/get_instructions.c.o -c src/get_instructions.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/match_str.c.o -c src/match_str.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/print_shopping_list.c.o -c src/print_shopping_list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/new_recipe.c.o -c src/new_recipe.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/print_main_menu.c.o -c src/print_main_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/compare_strings.c.o -c src/compare_strings.c
	$(CXX) $(FLAGS) -o Recipe_Database_patched lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/stdlib.c.o src/get_ingredients.c.o src/find_recipe.c.o src/print_recipe.c.o src/split_ingredients.c.o src/service.c.o src/sort_shopping_list.c.o src/get_instructions.c.o src/match_str.c.o src/print_shopping_list.c.o src/new_recipe.c.o src/print_main_menu.c.o src/compare_strings.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/mymath.c.o -c lib/mymath.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/new_printf.c.o -c lib/new_printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/get_ingredients.c.o -c src/get_ingredients.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/find_recipe.c.o -c src/find_recipe.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/print_recipe.c.o -c src/print_recipe.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/split_ingredients.c.o -c src/split_ingredients.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/sort_shopping_list.c.o -c src/sort_shopping_list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/get_instructions.c.o -c src/get_instructions.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/match_str.c.o -c src/match_str.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/print_shopping_list.c.o -c src/print_shopping_list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/new_recipe.c.o -c src/new_recipe.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/print_main_menu.c.o -c src/print_main_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/compare_strings.c.o -c src/compare_strings.c
	$(CXX) $(FLAGS) -o Recipe_Database lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/stdlib.c.o src/get_ingredients.c.o src/find_recipe.c.o src/print_recipe.c.o src/split_ingredients.c.o src/service.c.o src/sort_shopping_list.c.o src/get_instructions.c.o src/match_str.c.o src/print_shopping_list.c.o src/new_recipe.c.o src/print_main_menu.c.o src/compare_strings.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -O0 -g -pedantic -o pov_3/pov.c.o -c pov_3/pov.c
	$(CXX) $(FLAGS) -o Recipe_Database_pov_1 pov_1/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Recipe_Database_pov_2 pov_2/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Recipe_Database_pov_3 pov_3/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov.c.o pov_1/pov.c.o lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/stdlib.c.o src/get_ingredients.c.o src/find_recipe.c.o src/print_recipe.c.o src/split_ingredients.c.o src/service.c.o src/sort_shopping_list.c.o src/get_instructions.c.o src/match_str.c.o src/print_shopping_list.c.o src/new_recipe.c.o src/print_main_menu.c.o src/compare_strings.c.o pov_3/pov.c.o lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/stdlib.c.o src/get_ingredients.c.o src/find_recipe.c.o src/print_recipe.c.o src/split_ingredients.c.o src/service.c.o src/sort_shopping_list.c.o src/get_instructions.c.o src/match_str.c.o src/print_shopping_list.c.o src/new_recipe.c.o src/print_main_menu.c.o src/compare_strings.c.o Recipe_Database_pov_2 Recipe_Database_pov_1 Recipe_Database_patched Recipe_Database_pov_3 Recipe_Database
