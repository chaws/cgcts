# Build libcgc and libpov
CC=/usr/bin/gcc
AR=/usr/bin/ar

AR_FLAGS=rcs

# Library files
LIBCGC=libcgc.a
LIBPOV=libpov.a

CGC_INCLUDE=-I include/ -I include/tiny-AES128-C
CGC_SRC=$(addprefix src/,libcgc.c maths.S ansi_x931_aes128.c aes.c)
CGC_OBJS=$(addsuffix .o, $(CGC_SRC))
CGC_CFLAGS=-DLINUX -Dcgc_EXPORTS -Dtiny_AES128_C_EXPORTS -fPIC -fno-builtin -w -g3 -m32 -std=gnu99 

POV_INCLUDE=-I include/libpov $(CGC_INCLUDE)
POV_SRC=$(wildcard src/libpov/*.c)
POV_OBJS=$(addsuffix .o, $(POV_SRC))
POV_CFLAGS=-DLINUX -DNPATCHED -Dpov_EXPORTS -fPIC -fno-builtin -w -g3 -m32 -pedantic -O0 -std=gnu99

all: $(LIBCGC) $(LIBPOV)

$(LIBCGC): $(CGC_OBJS)
	$(AR) $(AR_FLAGS) $@ $(CGC_OBJS)

$(CGC_OBJS): %.o:%
	$(CC) $(CGC_CFLAGS) $(CGC_INCLUDE) -c $^ -o $@ 

$(LIBPOV): $(LIBCGC) $(POV_OBJS)
	$(AR) $(AR_FLAGS) $@ $(CGC_OBJS) $(POV_OBJS)

$(POV_OBJS): %.o:%
	$(CC) $(POV_CFLAGS) $(POV_INCLUDE) -c $^ -o $@ 

clean:
	rm -rf $(LIBCGC) $(LIBPOV) $(CGC_OBJS) $(POV_OBJS)
