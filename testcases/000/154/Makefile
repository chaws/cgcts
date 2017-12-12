CHAL=CGC_Planet_Markup_Language_Parser

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/printf.c.o -c lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/mymath.c.o -c lib/mymath.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/genericParsers.c.o -c src/genericParsers.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/countyParsers.c.o -c src/countyParsers.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/cityParsers.c.o -c src/cityParsers.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/territoryParsers.c.o -c src/territoryParsers.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/countryParsers.c.o -c src/countryParsers.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/planetParsers.c.o -c src/planetParsers.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/helper.c.o -c src/helper.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -o src/string.c.o -c src/string.c
	$(CC) $(FLAGS) -o CGC_Planet_Markup_Language_Parser_patched lib/printf.c.o lib/mymath.c.o lib/stdlib.c.o src/genericParsers.c.o src/countyParsers.c.o src/cityParsers.c.o src/territoryParsers.c.o src/countryParsers.c.o src/planetParsers.c.o src/service.c.o src/helper.c.o src/string.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/printf.c.o -c lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/mymath.c.o -c lib/mymath.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o lib/stdlib.c.o -c lib/stdlib.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/genericParsers.c.o -c src/genericParsers.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/countyParsers.c.o -c src/countyParsers.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/cityParsers.c.o -c src/cityParsers.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/territoryParsers.c.o -c src/territoryParsers.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/countryParsers.c.o -c src/countryParsers.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/planetParsers.c.o -c src/planetParsers.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/helper.c.o -c src/helper.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -o src/string.c.o -c src/string.c
	$(CC) $(FLAGS) -o CGC_Planet_Markup_Language_Parser lib/printf.c.o lib/mymath.c.o lib/stdlib.c.o src/genericParsers.c.o src/countyParsers.c.o src/cityParsers.c.o src/territoryParsers.c.o src/countryParsers.c.o src/planetParsers.c.o src/service.c.o src/helper.c.o src/string.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_6 -I include -I lib -I src -O0 -g -pedantic -o pov_6/pov.c.o -c pov_6/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -O0 -g -pedantic -o pov_3/pov.c.o -c pov_3/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_4 -I include -I lib -I src -O0 -g -pedantic -o pov_4/pov.c.o -c pov_4/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_5 -I include -I lib -I src -O0 -g -pedantic -o pov_5/pov.c.o -c pov_5/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_7 -I include -I lib -I src -O0 -g -pedantic -o pov_7/pov.c.o -c pov_7/pov.c
	$(CC) $(FLAGS) -o CGC_Planet_Markup_Language_Parser_pov_4 pov_4/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CGC_Planet_Markup_Language_Parser_pov_5 pov_5/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CGC_Planet_Markup_Language_Parser_pov_6 pov_6/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CGC_Planet_Markup_Language_Parser_pov_7 pov_7/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CGC_Planet_Markup_Language_Parser_pov_1 pov_1/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CGC_Planet_Markup_Language_Parser_pov_2 pov_2/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CGC_Planet_Markup_Language_Parser_pov_3 pov_3/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f lib/printf.c.o lib/mymath.c.o lib/stdlib.c.o src/genericParsers.c.o src/countyParsers.c.o src/cityParsers.c.o src/territoryParsers.c.o src/countryParsers.c.o src/planetParsers.c.o src/service.c.o src/helper.c.o src/string.c.o lib/printf.c.o lib/mymath.c.o lib/stdlib.c.o src/genericParsers.c.o src/countyParsers.c.o src/cityParsers.c.o src/territoryParsers.c.o src/countryParsers.c.o src/planetParsers.c.o src/service.c.o src/helper.c.o src/string.c.o pov_1/pov.c.o pov_2/pov.c.o pov_6/pov.c.o pov_3/pov.c.o pov_4/pov.c.o pov_5/pov.c.o pov_7/pov.c.o CGC_Planet_Markup_Language_Parser CGC_Planet_Markup_Language_Parser_patched CGC_Planet_Markup_Language_Parser_pov_1 CGC_Planet_Markup_Language_Parser_pov_2 CGC_Planet_Markup_Language_Parser_pov_6 CGC_Planet_Markup_Language_Parser_pov_3 CGC_Planet_Markup_Language_Parser_pov_4 CGC_Planet_Markup_Language_Parser_pov_5 CGC_Planet_Markup_Language_Parser_pov_7
