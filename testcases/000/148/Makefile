CHAL=A_Game_of_Chance

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/malloc.c.o -c cb_6/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/send_bytes.c.o -c cb_6/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/recv_bytes.c.o -c cb_6/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/memcpy.c.o -c cb_6/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/memcmp.c.o -c cb_6/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/xxprintf.c.o -c cb_6/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/conv.c.o -c cb_6/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/list.c.o -c cb_6/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/string.c.o -c cb_6/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/memset.c.o -c cb_6/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/service.c.o -c cb_6/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/player.c.o -c cb_6/src/player.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/card.c.o -c cb_6/src/card.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/send_bytes.c.o -c cb_1/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/recv_bytes.c.o -c cb_1/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/memcpy.c.o -c cb_1/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/memcmp.c.o -c cb_1/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/xxprintf.c.o -c cb_1/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/conv.c.o -c cb_1/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/list.c.o -c cb_1/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/string.c.o -c cb_1/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/memset.c.o -c cb_1/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/deck.c.o -c cb_1/src/deck.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/service.c.o -c cb_1/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/dealer.c.o -c cb_1/src/dealer.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/card.c.o -c cb_1/src/card.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/send_bytes.c.o -c cb_2/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/recv_bytes.c.o -c cb_2/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/memcpy.c.o -c cb_2/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/memcmp.c.o -c cb_2/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/xxprintf.c.o -c cb_2/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/conv.c.o -c cb_2/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/list.c.o -c cb_2/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/string.c.o -c cb_2/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/memset.c.o -c cb_2/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/service.c.o -c cb_2/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/player.c.o -c cb_2/src/player.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/card.c.o -c cb_2/src/card.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/malloc.c.o -c cb_5/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/send_bytes.c.o -c cb_5/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/recv_bytes.c.o -c cb_5/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/memcpy.c.o -c cb_5/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/memcmp.c.o -c cb_5/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/xxprintf.c.o -c cb_5/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/conv.c.o -c cb_5/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/list.c.o -c cb_5/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/string.c.o -c cb_5/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/memset.c.o -c cb_5/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/service.c.o -c cb_5/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/player.c.o -c cb_5/src/player.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/card.c.o -c cb_5/src/card.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/malloc.c.o -c cb_3/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/send_bytes.c.o -c cb_3/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/recv_bytes.c.o -c cb_3/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/memcpy.c.o -c cb_3/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/memcmp.c.o -c cb_3/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/xxprintf.c.o -c cb_3/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/conv.c.o -c cb_3/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/list.c.o -c cb_3/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/string.c.o -c cb_3/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/memset.c.o -c cb_3/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/service.c.o -c cb_3/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/player.c.o -c cb_3/src/player.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/card.c.o -c cb_3/src/card.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/malloc.c.o -c cb_4/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/send_bytes.c.o -c cb_4/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/recv_bytes.c.o -c cb_4/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/memcpy.c.o -c cb_4/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/memcmp.c.o -c cb_4/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/xxprintf.c.o -c cb_4/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/conv.c.o -c cb_4/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/list.c.o -c cb_4/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/string.c.o -c cb_4/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/memset.c.o -c cb_4/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/service.c.o -c cb_4/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/player.c.o -c cb_4/src/player.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/card.c.o -c cb_4/src/card.c
	$(CXX) $(FLAGS) -o A_Game_of_Chance_3_patched cb_3/lib/malloc.c.o cb_3/lib/send_bytes.c.o cb_3/lib/recv_bytes.c.o cb_3/lib/memcpy.c.o cb_3/lib/memcmp.c.o cb_3/lib/xxprintf.c.o cb_3/lib/conv.c.o cb_3/lib/list.c.o cb_3/lib/string.c.o cb_3/lib/memset.c.o cb_3/src/service.c.o cb_3/src/player.c.o cb_3/src/card.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o A_Game_of_Chance_5_patched cb_5/lib/malloc.c.o cb_5/lib/send_bytes.c.o cb_5/lib/recv_bytes.c.o cb_5/lib/memcpy.c.o cb_5/lib/memcmp.c.o cb_5/lib/xxprintf.c.o cb_5/lib/conv.c.o cb_5/lib/list.c.o cb_5/lib/string.c.o cb_5/lib/memset.c.o cb_5/src/service.c.o cb_5/src/player.c.o cb_5/src/card.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o A_Game_of_Chance_1_patched cb_1/lib/malloc.c.o cb_1/lib/send_bytes.c.o cb_1/lib/recv_bytes.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/xxprintf.c.o cb_1/lib/conv.c.o cb_1/lib/list.c.o cb_1/lib/string.c.o cb_1/lib/memset.c.o cb_1/src/deck.c.o cb_1/src/service.c.o cb_1/src/dealer.c.o cb_1/src/card.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o A_Game_of_Chance_6_patched cb_6/lib/malloc.c.o cb_6/lib/send_bytes.c.o cb_6/lib/recv_bytes.c.o cb_6/lib/memcpy.c.o cb_6/lib/memcmp.c.o cb_6/lib/xxprintf.c.o cb_6/lib/conv.c.o cb_6/lib/list.c.o cb_6/lib/string.c.o cb_6/lib/memset.c.o cb_6/src/service.c.o cb_6/src/player.c.o cb_6/src/card.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o A_Game_of_Chance_4_patched cb_4/lib/malloc.c.o cb_4/lib/send_bytes.c.o cb_4/lib/recv_bytes.c.o cb_4/lib/memcpy.c.o cb_4/lib/memcmp.c.o cb_4/lib/xxprintf.c.o cb_4/lib/conv.c.o cb_4/lib/list.c.o cb_4/lib/string.c.o cb_4/lib/memset.c.o cb_4/src/service.c.o cb_4/src/player.c.o cb_4/src/card.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o A_Game_of_Chance_2_patched cb_2/lib/malloc.c.o cb_2/lib/send_bytes.c.o cb_2/lib/recv_bytes.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/xxprintf.c.o cb_2/lib/conv.c.o cb_2/lib/list.c.o cb_2/lib/string.c.o cb_2/lib/memset.c.o cb_2/src/service.c.o cb_2/src/player.c.o cb_2/src/card.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/malloc.c.o -c cb_6/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/send_bytes.c.o -c cb_6/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/recv_bytes.c.o -c cb_6/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/memcpy.c.o -c cb_6/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/memcmp.c.o -c cb_6/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/xxprintf.c.o -c cb_6/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/conv.c.o -c cb_6/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/list.c.o -c cb_6/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/string.c.o -c cb_6/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/memset.c.o -c cb_6/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/service.c.o -c cb_6/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/player.c.o -c cb_6/src/player.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/card.c.o -c cb_6/src/card.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/send_bytes.c.o -c cb_1/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/recv_bytes.c.o -c cb_1/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/memcpy.c.o -c cb_1/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/memcmp.c.o -c cb_1/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/xxprintf.c.o -c cb_1/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/conv.c.o -c cb_1/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/list.c.o -c cb_1/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/string.c.o -c cb_1/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/memset.c.o -c cb_1/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/deck.c.o -c cb_1/src/deck.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/service.c.o -c cb_1/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/dealer.c.o -c cb_1/src/dealer.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/card.c.o -c cb_1/src/card.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/malloc.c.o -c cb_3/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/send_bytes.c.o -c cb_3/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/recv_bytes.c.o -c cb_3/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/memcpy.c.o -c cb_3/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/memcmp.c.o -c cb_3/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/xxprintf.c.o -c cb_3/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/conv.c.o -c cb_3/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/list.c.o -c cb_3/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/string.c.o -c cb_3/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/memset.c.o -c cb_3/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/service.c.o -c cb_3/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/player.c.o -c cb_3/src/player.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/card.c.o -c cb_3/src/card.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/send_bytes.c.o -c cb_2/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/recv_bytes.c.o -c cb_2/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/memcpy.c.o -c cb_2/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/memcmp.c.o -c cb_2/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/xxprintf.c.o -c cb_2/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/conv.c.o -c cb_2/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/list.c.o -c cb_2/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/string.c.o -c cb_2/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/memset.c.o -c cb_2/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/service.c.o -c cb_2/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/player.c.o -c cb_2/src/player.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/card.c.o -c cb_2/src/card.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/malloc.c.o -c cb_4/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/send_bytes.c.o -c cb_4/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/recv_bytes.c.o -c cb_4/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/memcpy.c.o -c cb_4/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/memcmp.c.o -c cb_4/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/xxprintf.c.o -c cb_4/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/conv.c.o -c cb_4/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/list.c.o -c cb_4/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/string.c.o -c cb_4/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/memset.c.o -c cb_4/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/service.c.o -c cb_4/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/player.c.o -c cb_4/src/player.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/card.c.o -c cb_4/src/card.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/malloc.c.o -c cb_5/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/send_bytes.c.o -c cb_5/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/recv_bytes.c.o -c cb_5/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/memcpy.c.o -c cb_5/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/memcmp.c.o -c cb_5/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/xxprintf.c.o -c cb_5/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/conv.c.o -c cb_5/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/list.c.o -c cb_5/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/string.c.o -c cb_5/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/memset.c.o -c cb_5/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/service.c.o -c cb_5/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/player.c.o -c cb_5/src/player.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/card.c.o -c cb_5/src/card.c
	$(CXX) $(FLAGS) -o A_Game_of_Chance_6 cb_6/lib/malloc.c.o cb_6/lib/send_bytes.c.o cb_6/lib/recv_bytes.c.o cb_6/lib/memcpy.c.o cb_6/lib/memcmp.c.o cb_6/lib/xxprintf.c.o cb_6/lib/conv.c.o cb_6/lib/list.c.o cb_6/lib/string.c.o cb_6/lib/memset.c.o cb_6/src/service.c.o cb_6/src/player.c.o cb_6/src/card.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o A_Game_of_Chance_4 cb_4/lib/malloc.c.o cb_4/lib/send_bytes.c.o cb_4/lib/recv_bytes.c.o cb_4/lib/memcpy.c.o cb_4/lib/memcmp.c.o cb_4/lib/xxprintf.c.o cb_4/lib/conv.c.o cb_4/lib/list.c.o cb_4/lib/string.c.o cb_4/lib/memset.c.o cb_4/src/service.c.o cb_4/src/player.c.o cb_4/src/card.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o A_Game_of_Chance_5 cb_5/lib/malloc.c.o cb_5/lib/send_bytes.c.o cb_5/lib/recv_bytes.c.o cb_5/lib/memcpy.c.o cb_5/lib/memcmp.c.o cb_5/lib/xxprintf.c.o cb_5/lib/conv.c.o cb_5/lib/list.c.o cb_5/lib/string.c.o cb_5/lib/memset.c.o cb_5/src/service.c.o cb_5/src/player.c.o cb_5/src/card.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o A_Game_of_Chance_2 cb_2/lib/malloc.c.o cb_2/lib/send_bytes.c.o cb_2/lib/recv_bytes.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/xxprintf.c.o cb_2/lib/conv.c.o cb_2/lib/list.c.o cb_2/lib/string.c.o cb_2/lib/memset.c.o cb_2/src/service.c.o cb_2/src/player.c.o cb_2/src/card.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o A_Game_of_Chance_3 cb_3/lib/malloc.c.o cb_3/lib/send_bytes.c.o cb_3/lib/recv_bytes.c.o cb_3/lib/memcpy.c.o cb_3/lib/memcmp.c.o cb_3/lib/xxprintf.c.o cb_3/lib/conv.c.o cb_3/lib/list.c.o cb_3/lib/string.c.o cb_3/lib/memset.c.o cb_3/src/service.c.o cb_3/src/player.c.o cb_3/src/card.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o A_Game_of_Chance_1 cb_1/lib/malloc.c.o cb_1/lib/send_bytes.c.o cb_1/lib/recv_bytes.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/xxprintf.c.o cb_1/lib/conv.c.o cb_1/lib/list.c.o cb_1/lib/string.c.o cb_1/lib/memset.c.o cb_1/src/deck.c.o cb_1/src/service.c.o cb_1/src/dealer.c.o cb_1/src/card.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/send_bytes.c.o -c pov_1/send_bytes.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/recv_bytes.c.o -c pov_1/recv_bytes.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/memcpy.c.o -c pov_1/memcpy.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/xxprintf.c.o -c pov_1/xxprintf.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/conv.c.o -c pov_1/conv.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/pov_1.c.o -c pov_1/pov_1.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/string.c.o -c pov_1/string.c
	$(CXX) $(FLAGS) -o A_Game_of_Chance_pov_1 pov_1/send_bytes.c.o pov_1/recv_bytes.c.o pov_1/memcpy.c.o pov_1/xxprintf.c.o pov_1/conv.c.o pov_1/pov_1.c.o pov_1/string.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f cb_6/lib/malloc.c.o cb_6/lib/send_bytes.c.o cb_6/lib/recv_bytes.c.o cb_6/lib/memcpy.c.o cb_6/lib/memcmp.c.o cb_6/lib/xxprintf.c.o cb_6/lib/conv.c.o cb_6/lib/list.c.o cb_6/lib/string.c.o cb_6/lib/memset.c.o cb_6/src/service.c.o cb_6/src/player.c.o cb_6/src/card.c.o cb_6/lib/malloc.c.o cb_6/lib/send_bytes.c.o cb_6/lib/recv_bytes.c.o cb_6/lib/memcpy.c.o cb_6/lib/memcmp.c.o cb_6/lib/xxprintf.c.o cb_6/lib/conv.c.o cb_6/lib/list.c.o cb_6/lib/string.c.o cb_6/lib/memset.c.o cb_6/src/service.c.o cb_6/src/player.c.o cb_6/src/card.c.o cb_1/lib/malloc.c.o cb_1/lib/send_bytes.c.o cb_1/lib/recv_bytes.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/xxprintf.c.o cb_1/lib/conv.c.o cb_1/lib/list.c.o cb_1/lib/string.c.o cb_1/lib/memset.c.o cb_1/src/deck.c.o cb_1/src/service.c.o cb_1/src/dealer.c.o cb_1/src/card.c.o cb_1/lib/malloc.c.o cb_1/lib/send_bytes.c.o cb_1/lib/recv_bytes.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/xxprintf.c.o cb_1/lib/conv.c.o cb_1/lib/list.c.o cb_1/lib/string.c.o cb_1/lib/memset.c.o cb_1/src/deck.c.o cb_1/src/service.c.o cb_1/src/dealer.c.o cb_1/src/card.c.o cb_3/lib/malloc.c.o cb_3/lib/send_bytes.c.o cb_3/lib/recv_bytes.c.o cb_3/lib/memcpy.c.o cb_3/lib/memcmp.c.o cb_3/lib/xxprintf.c.o cb_3/lib/conv.c.o cb_3/lib/list.c.o cb_3/lib/string.c.o cb_3/lib/memset.c.o cb_3/src/service.c.o cb_3/src/player.c.o cb_3/src/card.c.o cb_2/lib/malloc.c.o cb_2/lib/send_bytes.c.o cb_2/lib/recv_bytes.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/xxprintf.c.o cb_2/lib/conv.c.o cb_2/lib/list.c.o cb_2/lib/string.c.o cb_2/lib/memset.c.o cb_2/src/service.c.o cb_2/src/player.c.o cb_2/src/card.c.o cb_2/lib/malloc.c.o cb_2/lib/send_bytes.c.o cb_2/lib/recv_bytes.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/xxprintf.c.o cb_2/lib/conv.c.o cb_2/lib/list.c.o cb_2/lib/string.c.o cb_2/lib/memset.c.o cb_2/src/service.c.o cb_2/src/player.c.o cb_2/src/card.c.o pov_1/send_bytes.c.o pov_1/recv_bytes.c.o pov_1/memcpy.c.o pov_1/xxprintf.c.o pov_1/conv.c.o pov_1/pov_1.c.o pov_1/string.c.o cb_5/lib/malloc.c.o cb_5/lib/send_bytes.c.o cb_5/lib/recv_bytes.c.o cb_5/lib/memcpy.c.o cb_5/lib/memcmp.c.o cb_5/lib/xxprintf.c.o cb_5/lib/conv.c.o cb_5/lib/list.c.o cb_5/lib/string.c.o cb_5/lib/memset.c.o cb_5/src/service.c.o cb_5/src/player.c.o cb_5/src/card.c.o cb_3/lib/malloc.c.o cb_3/lib/send_bytes.c.o cb_3/lib/recv_bytes.c.o cb_3/lib/memcpy.c.o cb_3/lib/memcmp.c.o cb_3/lib/xxprintf.c.o cb_3/lib/conv.c.o cb_3/lib/list.c.o cb_3/lib/string.c.o cb_3/lib/memset.c.o cb_3/src/service.c.o cb_3/src/player.c.o cb_3/src/card.c.o cb_4/lib/malloc.c.o cb_4/lib/send_bytes.c.o cb_4/lib/recv_bytes.c.o cb_4/lib/memcpy.c.o cb_4/lib/memcmp.c.o cb_4/lib/xxprintf.c.o cb_4/lib/conv.c.o cb_4/lib/list.c.o cb_4/lib/string.c.o cb_4/lib/memset.c.o cb_4/src/service.c.o cb_4/src/player.c.o cb_4/src/card.c.o cb_4/lib/malloc.c.o cb_4/lib/send_bytes.c.o cb_4/lib/recv_bytes.c.o cb_4/lib/memcpy.c.o cb_4/lib/memcmp.c.o cb_4/lib/xxprintf.c.o cb_4/lib/conv.c.o cb_4/lib/list.c.o cb_4/lib/string.c.o cb_4/lib/memset.c.o cb_4/src/service.c.o cb_4/src/player.c.o cb_4/src/card.c.o cb_5/lib/malloc.c.o cb_5/lib/send_bytes.c.o cb_5/lib/recv_bytes.c.o cb_5/lib/memcpy.c.o cb_5/lib/memcmp.c.o cb_5/lib/xxprintf.c.o cb_5/lib/conv.c.o cb_5/lib/list.c.o cb_5/lib/string.c.o cb_5/lib/memset.c.o cb_5/src/service.c.o cb_5/src/player.c.o cb_5/src/card.c.o A_Game_of_Chance_6_patched A_Game_of_Chance_6 A_Game_of_Chance_1 A_Game_of_Chance_1_patched A_Game_of_Chance_3 A_Game_of_Chance_2 A_Game_of_Chance_2_patched A_Game_of_Chance_pov_1 A_Game_of_Chance_5_patched A_Game_of_Chance_3_patched A_Game_of_Chance_4 A_Game_of_Chance_4_patched A_Game_of_Chance_5
