CHAL=Game_Night

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o lib/pool.c.o -c lib/pool.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o lib/conv.c.o -c lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o lib/bitset.c.o -c lib/bitset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o src/chess.c.o -c src/chess.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o src/sudoku.c.o -c src/sudoku.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o src/lesson_in_futility.c.o -c src/lesson_in_futility.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o src/hugman.c.o -c src/hugman.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o src/chance_of_survival.c.o -c src/chance_of_survival.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o src/gallon_challenge.c.o -c src/gallon_challenge.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o src/safari_zone.c.o -c src/safari_zone.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -I lib -I src -I include -O0 -o src/games.c.o -c src/games.c
	$(CC) $(FLAGS) -o Game_Night_patched lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/chess.c.o src/sudoku.c.o src/lesson_in_futility.c.o src/service.c.o src/hugman.c.o src/chance_of_survival.c.o src/gallon_challenge.c.o src/safari_zone.c.o src/games.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o lib/pool.c.o -c lib/pool.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o lib/conv.c.o -c lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o lib/math.c.o -c lib/math.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o lib/stdio.c.o -c lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o lib/string.c.o -c lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o lib/bitset.c.o -c lib/bitset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o src/chess.c.o -c src/chess.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o src/sudoku.c.o -c src/sudoku.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o src/lesson_in_futility.c.o -c src/lesson_in_futility.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o src/hugman.c.o -c src/hugman.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o src/chance_of_survival.c.o -c src/chance_of_survival.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o src/gallon_challenge.c.o -c src/gallon_challenge.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o src/safari_zone.c.o -c src/safari_zone.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -o src/games.c.o -c src/games.c
	$(CC) $(FLAGS) -o Game_Night lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/chess.c.o src/sudoku.c.o src/lesson_in_futility.c.o src/service.c.o src/hugman.c.o src/chance_of_survival.c.o src/gallon_challenge.c.o src/safari_zone.c.o src/games.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_4 -I include -I lib -I src -O0 -pedantic -o pov_4/conv.c.o -c pov_4/conv.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_4 -I include -I lib -I src -O0 -pedantic -o pov_4/math.c.o -c pov_4/math.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_4 -I include -I lib -I src -O0 -pedantic -o pov_4/stdlib.c.o -c pov_4/stdlib.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_4 -I include -I lib -I src -O0 -pedantic -o pov_4/string.c.o -c pov_4/string.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_4 -I include -I lib -I src -O0 -pedantic -o pov_4/pov_4.c.o -c pov_4/pov_4.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -O0 -pedantic -o pov_3/pov_3.c.o -c pov_3/pov_3.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -O0 -pedantic -o pov_3/conv.c.o -c pov_3/conv.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -O0 -pedantic -o pov_3/math.c.o -c pov_3/math.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -O0 -pedantic -o pov_3/stdlib.c.o -c pov_3/stdlib.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -O0 -pedantic -o pov_3/string.c.o -c pov_3/string.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -pedantic -o pov_1/pov_1.c.o -c pov_1/pov_1.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -pedantic -o pov_2/conv.c.o -c pov_2/conv.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -pedantic -o pov_2/math.c.o -c pov_2/math.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -pedantic -o pov_2/stdlib.c.o -c pov_2/stdlib.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -pedantic -o pov_2/string.c.o -c pov_2/string.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -pedantic -o pov_2/pov_2.c.o -c pov_2/pov_2.c
	$(CC) $(FLAGS) -o Game_Night_pov_2 pov_2/conv.c.o pov_2/math.c.o pov_2/stdlib.c.o pov_2/string.c.o pov_2/pov_2.c.o $(LPOV) 
	$(CC) $(FLAGS) -o Game_Night_pov_3 pov_3/pov_3.c.o pov_3/conv.c.o pov_3/math.c.o pov_3/stdlib.c.o pov_3/string.c.o $(LPOV) 
	$(CC) $(FLAGS) -o Game_Night_pov_1 pov_1/pov_1.c.o $(LPOV) 
	$(CC) $(FLAGS) -o Game_Night_pov_4 pov_4/conv.c.o pov_4/math.c.o pov_4/stdlib.c.o pov_4/string.c.o pov_4/pov_4.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_4/conv.c.o pov_4/math.c.o pov_4/stdlib.c.o pov_4/string.c.o pov_4/pov_4.c.o pov_3/pov_3.c.o pov_3/conv.c.o pov_3/math.c.o pov_3/stdlib.c.o pov_3/string.c.o pov_1/pov_1.c.o lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/chess.c.o src/sudoku.c.o src/lesson_in_futility.c.o src/service.c.o src/hugman.c.o src/chance_of_survival.c.o src/gallon_challenge.c.o src/safari_zone.c.o src/games.c.o pov_2/conv.c.o pov_2/math.c.o pov_2/stdlib.c.o pov_2/string.c.o pov_2/pov_2.c.o lib/pool.c.o lib/conv.c.o lib/math.c.o lib/stdlib.c.o lib/stdio.c.o lib/string.c.o lib/bitset.c.o src/chess.c.o src/sudoku.c.o src/lesson_in_futility.c.o src/service.c.o src/hugman.c.o src/chance_of_survival.c.o src/gallon_challenge.c.o src/safari_zone.c.o src/games.c.o Game_Night_pov_4 Game_Night_pov_3 Game_Night_pov_1 Game_Night_patched Game_Night_pov_2 Game_Night
