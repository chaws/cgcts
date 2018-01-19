CHAL=SCUBA_Dive_Logging

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/log_dive.c.o -c src/log_dive.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/edit_dives.c.o -c src/edit_dives.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/dates.c.o -c src/dates.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/print_dives.c.o -c src/print_dives.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/remove_dives.c.o -c src/remove_dives.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/download_dive.c.o -c src/download_dive.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/edit_diver.c.o -c src/edit_diver.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/menu.c.o -c src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/dive_statistics.c.o -c src/dive_statistics.c
	$(CXX) $(FLAGS) -o SCUBA_Dive_Logging_patched lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/stdlib.c.o src/log_dive.c.o src/edit_dives.c.o src/dates.c.o src/print_dives.c.o src/remove_dives.c.o src/service.c.o src/download_dive.c.o src/edit_diver.c.o src/menu.c.o src/dive_statistics.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/mymath.c.o -c lib/mymath.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/new_printf.c.o -c lib/new_printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/log_dive.c.o -c src/log_dive.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/edit_dives.c.o -c src/edit_dives.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/dates.c.o -c src/dates.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/print_dives.c.o -c src/print_dives.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/remove_dives.c.o -c src/remove_dives.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/download_dive.c.o -c src/download_dive.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/edit_diver.c.o -c src/edit_diver.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/menu.c.o -c src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/dive_statistics.c.o -c src/dive_statistics.c
	$(CXX) $(FLAGS) -o SCUBA_Dive_Logging lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/stdlib.c.o src/log_dive.c.o src/edit_dives.c.o src/dates.c.o src/print_dives.c.o src/remove_dives.c.o src/service.c.o src/download_dive.c.o src/edit_diver.c.o src/menu.c.o src/dive_statistics.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CXX) $(FLAGS) -o SCUBA_Dive_Logging_pov_1 pov_1/pov.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o SCUBA_Dive_Logging_pov_2 pov_2/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov.c.o pov_1/pov.c.o lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/stdlib.c.o src/log_dive.c.o src/edit_dives.c.o src/dates.c.o src/print_dives.c.o src/remove_dives.c.o src/service.c.o src/download_dive.c.o src/edit_diver.c.o src/menu.c.o src/dive_statistics.c.o lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/stdlib.c.o src/log_dive.c.o src/edit_dives.c.o src/dates.c.o src/print_dives.c.o src/remove_dives.c.o src/service.c.o src/download_dive.c.o src/edit_diver.c.o src/menu.c.o src/dive_statistics.c.o SCUBA_Dive_Logging_pov_2 SCUBA_Dive_Logging_pov_1 SCUBA_Dive_Logging_patched SCUBA_Dive_Logging
