CHAL=Order_Up

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/recv_until_delim_n.c.o -c cb_4/lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/malloc.c.o -c cb_4/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/send_bytes.c.o -c cb_4/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/recv_bytes.c.o -c cb_4/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/memcpy.c.o -c cb_4/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/memcmp.c.o -c cb_4/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/xxprintf.c.o -c cb_4/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/conv.c.o -c cb_4/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/list.c.o -c cb_4/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/string.c.o -c cb_4/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/memset.c.o -c cb_4/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/customer.c.o -c cb_4/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/service.c.o -c cb_4/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/table.c.o -c cb_4/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/order.c.o -c cb_4/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/menu.c.o -c cb_4/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/comms.c.o -c cb_4/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/todays_menu.c.o -c cb_4/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/recv_until_delim_n.c.o -c cb_9/lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/malloc.c.o -c cb_9/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/send_bytes.c.o -c cb_9/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/recv_bytes.c.o -c cb_9/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/memcpy.c.o -c cb_9/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/memcmp.c.o -c cb_9/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/xxprintf.c.o -c cb_9/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/conv.c.o -c cb_9/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/list.c.o -c cb_9/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/string.c.o -c cb_9/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/memset.c.o -c cb_9/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/src/customer.c.o -c cb_9/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/src/service.c.o -c cb_9/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/src/table.c.o -c cb_9/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/src/order.c.o -c cb_9/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/src/menu.c.o -c cb_9/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/src/comms.c.o -c cb_9/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/src/todays_menu.c.o -c cb_9/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/recv_until_delim_n.c.o -c cb_8/lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/malloc.c.o -c cb_8/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/send_bytes.c.o -c cb_8/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/recv_bytes.c.o -c cb_8/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/memcpy.c.o -c cb_8/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/memcmp.c.o -c cb_8/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/xxprintf.c.o -c cb_8/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/conv.c.o -c cb_8/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/list.c.o -c cb_8/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/string.c.o -c cb_8/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/memset.c.o -c cb_8/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/src/customer.c.o -c cb_8/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/src/service.c.o -c cb_8/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/src/table.c.o -c cb_8/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/src/order.c.o -c cb_8/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/src/menu.c.o -c cb_8/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/src/comms.c.o -c cb_8/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/src/todays_menu.c.o -c cb_8/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/recv_until_delim_n.c.o -c cb_5/lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/malloc.c.o -c cb_5/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/send_bytes.c.o -c cb_5/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/recv_bytes.c.o -c cb_5/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/memcpy.c.o -c cb_5/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/memcmp.c.o -c cb_5/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/xxprintf.c.o -c cb_5/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/conv.c.o -c cb_5/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/list.c.o -c cb_5/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/string.c.o -c cb_5/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/memset.c.o -c cb_5/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/customer.c.o -c cb_5/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/service.c.o -c cb_5/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/table.c.o -c cb_5/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/order.c.o -c cb_5/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/menu.c.o -c cb_5/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/comms.c.o -c cb_5/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/todays_menu.c.o -c cb_5/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/recv_until_delim_n.c.o -c cb_3/lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/malloc.c.o -c cb_3/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/send_bytes.c.o -c cb_3/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/recv_bytes.c.o -c cb_3/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/memcpy.c.o -c cb_3/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/memcmp.c.o -c cb_3/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/xxprintf.c.o -c cb_3/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/conv.c.o -c cb_3/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/list.c.o -c cb_3/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/string.c.o -c cb_3/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/memset.c.o -c cb_3/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/customer.c.o -c cb_3/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/service.c.o -c cb_3/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/table.c.o -c cb_3/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/order.c.o -c cb_3/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/menu.c.o -c cb_3/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/comms.c.o -c cb_3/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/todays_menu.c.o -c cb_3/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/recv_until_delim_n.c.o -c cb_1/lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/send_bytes.c.o -c cb_1/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/recv_bytes.c.o -c cb_1/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/memcpy.c.o -c cb_1/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/memcmp.c.o -c cb_1/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/xxprintf.c.o -c cb_1/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/conv.c.o -c cb_1/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/list.c.o -c cb_1/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/string.c.o -c cb_1/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/memset.c.o -c cb_1/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/customer.c.o -c cb_1/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/table_comms.c.o -c cb_1/src/table_comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/service.c.o -c cb_1/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/order.c.o -c cb_1/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/menu.c.o -c cb_1/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/restaurant.c.o -c cb_1/src/restaurant.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/recv_until_delim_n.c.o -c cb_2/lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/send_bytes.c.o -c cb_2/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/recv_bytes.c.o -c cb_2/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/memcpy.c.o -c cb_2/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/memcmp.c.o -c cb_2/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/xxprintf.c.o -c cb_2/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/conv.c.o -c cb_2/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/list.c.o -c cb_2/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/string.c.o -c cb_2/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/memset.c.o -c cb_2/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/customer.c.o -c cb_2/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/service.c.o -c cb_2/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/table.c.o -c cb_2/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/order.c.o -c cb_2/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/menu.c.o -c cb_2/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/comms.c.o -c cb_2/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/todays_menu.c.o -c cb_2/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/recv_until_delim_n.c.o -c cb_6/lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/malloc.c.o -c cb_6/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/send_bytes.c.o -c cb_6/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/recv_bytes.c.o -c cb_6/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/memcpy.c.o -c cb_6/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/memcmp.c.o -c cb_6/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/xxprintf.c.o -c cb_6/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/conv.c.o -c cb_6/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/list.c.o -c cb_6/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/string.c.o -c cb_6/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/memset.c.o -c cb_6/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/customer.c.o -c cb_6/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/service.c.o -c cb_6/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/table.c.o -c cb_6/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/order.c.o -c cb_6/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/menu.c.o -c cb_6/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/comms.c.o -c cb_6/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/todays_menu.c.o -c cb_6/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/recv_until_delim_n.c.o -c cb_10/lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/malloc.c.o -c cb_10/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/send_bytes.c.o -c cb_10/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/recv_bytes.c.o -c cb_10/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/memcpy.c.o -c cb_10/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/memcmp.c.o -c cb_10/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/xxprintf.c.o -c cb_10/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/conv.c.o -c cb_10/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/list.c.o -c cb_10/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/string.c.o -c cb_10/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/memset.c.o -c cb_10/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/src/customer.c.o -c cb_10/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/src/service.c.o -c cb_10/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/src/table.c.o -c cb_10/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/src/order.c.o -c cb_10/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/src/menu.c.o -c cb_10/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/src/comms.c.o -c cb_10/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/src/todays_menu.c.o -c cb_10/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/recv_until_delim_n.c.o -c cb_7/lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/malloc.c.o -c cb_7/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/send_bytes.c.o -c cb_7/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/recv_bytes.c.o -c cb_7/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/memcpy.c.o -c cb_7/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/memcmp.c.o -c cb_7/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/xxprintf.c.o -c cb_7/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/conv.c.o -c cb_7/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/list.c.o -c cb_7/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/string.c.o -c cb_7/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/memset.c.o -c cb_7/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/src/customer.c.o -c cb_7/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/src/service.c.o -c cb_7/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/src/table.c.o -c cb_7/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/src/order.c.o -c cb_7/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/src/menu.c.o -c cb_7/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/src/comms.c.o -c cb_7/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -DPATCHED_2 -DPATCHED_3 -DPATCHED_4 -DPATCHED_5 -DPATCHED_6 -DPATCHED_7 -DPATCHED_8 -DPATCHED_9 -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/src/todays_menu.c.o -c cb_7/src/todays_menu.c
	$(CXX) $(FLAGS) -o Order_Up_2_patched cb_2/lib/recv_until_delim_n.c.o cb_2/lib/malloc.c.o cb_2/lib/send_bytes.c.o cb_2/lib/recv_bytes.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/xxprintf.c.o cb_2/lib/conv.c.o cb_2/lib/list.c.o cb_2/lib/string.c.o cb_2/lib/memset.c.o cb_2/src/customer.c.o cb_2/src/service.c.o cb_2/src/table.c.o cb_2/src/order.c.o cb_2/src/menu.c.o cb_2/src/comms.c.o cb_2/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_9_patched cb_9/lib/recv_until_delim_n.c.o cb_9/lib/malloc.c.o cb_9/lib/send_bytes.c.o cb_9/lib/recv_bytes.c.o cb_9/lib/memcpy.c.o cb_9/lib/memcmp.c.o cb_9/lib/xxprintf.c.o cb_9/lib/conv.c.o cb_9/lib/list.c.o cb_9/lib/string.c.o cb_9/lib/memset.c.o cb_9/src/customer.c.o cb_9/src/service.c.o cb_9/src/table.c.o cb_9/src/order.c.o cb_9/src/menu.c.o cb_9/src/comms.c.o cb_9/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_7_patched cb_7/lib/recv_until_delim_n.c.o cb_7/lib/malloc.c.o cb_7/lib/send_bytes.c.o cb_7/lib/recv_bytes.c.o cb_7/lib/memcpy.c.o cb_7/lib/memcmp.c.o cb_7/lib/xxprintf.c.o cb_7/lib/conv.c.o cb_7/lib/list.c.o cb_7/lib/string.c.o cb_7/lib/memset.c.o cb_7/src/customer.c.o cb_7/src/service.c.o cb_7/src/table.c.o cb_7/src/order.c.o cb_7/src/menu.c.o cb_7/src/comms.c.o cb_7/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_5_patched cb_5/lib/recv_until_delim_n.c.o cb_5/lib/malloc.c.o cb_5/lib/send_bytes.c.o cb_5/lib/recv_bytes.c.o cb_5/lib/memcpy.c.o cb_5/lib/memcmp.c.o cb_5/lib/xxprintf.c.o cb_5/lib/conv.c.o cb_5/lib/list.c.o cb_5/lib/string.c.o cb_5/lib/memset.c.o cb_5/src/customer.c.o cb_5/src/service.c.o cb_5/src/table.c.o cb_5/src/order.c.o cb_5/src/menu.c.o cb_5/src/comms.c.o cb_5/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_3_patched cb_3/lib/recv_until_delim_n.c.o cb_3/lib/malloc.c.o cb_3/lib/send_bytes.c.o cb_3/lib/recv_bytes.c.o cb_3/lib/memcpy.c.o cb_3/lib/memcmp.c.o cb_3/lib/xxprintf.c.o cb_3/lib/conv.c.o cb_3/lib/list.c.o cb_3/lib/string.c.o cb_3/lib/memset.c.o cb_3/src/customer.c.o cb_3/src/service.c.o cb_3/src/table.c.o cb_3/src/order.c.o cb_3/src/menu.c.o cb_3/src/comms.c.o cb_3/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_1_patched cb_1/lib/recv_until_delim_n.c.o cb_1/lib/malloc.c.o cb_1/lib/send_bytes.c.o cb_1/lib/recv_bytes.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/xxprintf.c.o cb_1/lib/conv.c.o cb_1/lib/list.c.o cb_1/lib/string.c.o cb_1/lib/memset.c.o cb_1/src/customer.c.o cb_1/src/table_comms.c.o cb_1/src/service.c.o cb_1/src/order.c.o cb_1/src/menu.c.o cb_1/src/restaurant.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_8_patched cb_8/lib/recv_until_delim_n.c.o cb_8/lib/malloc.c.o cb_8/lib/send_bytes.c.o cb_8/lib/recv_bytes.c.o cb_8/lib/memcpy.c.o cb_8/lib/memcmp.c.o cb_8/lib/xxprintf.c.o cb_8/lib/conv.c.o cb_8/lib/list.c.o cb_8/lib/string.c.o cb_8/lib/memset.c.o cb_8/src/customer.c.o cb_8/src/service.c.o cb_8/src/table.c.o cb_8/src/order.c.o cb_8/src/menu.c.o cb_8/src/comms.c.o cb_8/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_6_patched cb_6/lib/recv_until_delim_n.c.o cb_6/lib/malloc.c.o cb_6/lib/send_bytes.c.o cb_6/lib/recv_bytes.c.o cb_6/lib/memcpy.c.o cb_6/lib/memcmp.c.o cb_6/lib/xxprintf.c.o cb_6/lib/conv.c.o cb_6/lib/list.c.o cb_6/lib/string.c.o cb_6/lib/memset.c.o cb_6/src/customer.c.o cb_6/src/service.c.o cb_6/src/table.c.o cb_6/src/order.c.o cb_6/src/menu.c.o cb_6/src/comms.c.o cb_6/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_4_patched cb_4/lib/recv_until_delim_n.c.o cb_4/lib/malloc.c.o cb_4/lib/send_bytes.c.o cb_4/lib/recv_bytes.c.o cb_4/lib/memcpy.c.o cb_4/lib/memcmp.c.o cb_4/lib/xxprintf.c.o cb_4/lib/conv.c.o cb_4/lib/list.c.o cb_4/lib/string.c.o cb_4/lib/memset.c.o cb_4/src/customer.c.o cb_4/src/service.c.o cb_4/src/table.c.o cb_4/src/order.c.o cb_4/src/menu.c.o cb_4/src/comms.c.o cb_4/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_10_patched cb_10/lib/recv_until_delim_n.c.o cb_10/lib/malloc.c.o cb_10/lib/send_bytes.c.o cb_10/lib/recv_bytes.c.o cb_10/lib/memcpy.c.o cb_10/lib/memcmp.c.o cb_10/lib/xxprintf.c.o cb_10/lib/conv.c.o cb_10/lib/list.c.o cb_10/lib/string.c.o cb_10/lib/memset.c.o cb_10/src/customer.c.o cb_10/src/service.c.o cb_10/src/table.c.o cb_10/src/order.c.o cb_10/src/menu.c.o cb_10/src/comms.c.o cb_10/src/todays_menu.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/recv_until_delim_n.c.o -c cb_9/lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/malloc.c.o -c cb_9/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/send_bytes.c.o -c cb_9/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/recv_bytes.c.o -c cb_9/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/memcpy.c.o -c cb_9/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/memcmp.c.o -c cb_9/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/xxprintf.c.o -c cb_9/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/conv.c.o -c cb_9/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/list.c.o -c cb_9/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/string.c.o -c cb_9/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/lib/memset.c.o -c cb_9/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/src/customer.c.o -c cb_9/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/src/service.c.o -c cb_9/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/src/table.c.o -c cb_9/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/src/order.c.o -c cb_9/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/src/menu.c.o -c cb_9/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/src/comms.c.o -c cb_9/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_9/lib -I cb_9/src -I cb_9/include -g -o cb_9/src/todays_menu.c.o -c cb_9/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/lib/recv_until_delim_n.c.o -c cb_3/lib/recv_until_delim_n.c
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
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/customer.c.o -c cb_3/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/service.c.o -c cb_3/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/table.c.o -c cb_3/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/order.c.o -c cb_3/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/menu.c.o -c cb_3/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/comms.c.o -c cb_3/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -g -o cb_3/src/todays_menu.c.o -c cb_3/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/recv_until_delim_n.c.o -c cb_8/lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/malloc.c.o -c cb_8/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/send_bytes.c.o -c cb_8/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/recv_bytes.c.o -c cb_8/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/memcpy.c.o -c cb_8/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/memcmp.c.o -c cb_8/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/xxprintf.c.o -c cb_8/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/conv.c.o -c cb_8/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/list.c.o -c cb_8/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/string.c.o -c cb_8/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/lib/memset.c.o -c cb_8/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/src/customer.c.o -c cb_8/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/src/service.c.o -c cb_8/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/src/table.c.o -c cb_8/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/src/order.c.o -c cb_8/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/src/menu.c.o -c cb_8/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/src/comms.c.o -c cb_8/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_8/lib -I cb_8/src -I cb_8/include -g -o cb_8/src/todays_menu.c.o -c cb_8/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/recv_until_delim_n.c.o -c cb_10/lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/malloc.c.o -c cb_10/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/send_bytes.c.o -c cb_10/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/recv_bytes.c.o -c cb_10/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/memcpy.c.o -c cb_10/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/memcmp.c.o -c cb_10/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/xxprintf.c.o -c cb_10/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/conv.c.o -c cb_10/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/list.c.o -c cb_10/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/string.c.o -c cb_10/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/lib/memset.c.o -c cb_10/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/src/customer.c.o -c cb_10/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/src/service.c.o -c cb_10/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/src/table.c.o -c cb_10/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/src/order.c.o -c cb_10/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/src/menu.c.o -c cb_10/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/src/comms.c.o -c cb_10/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_10/lib -I cb_10/src -I cb_10/include -g -o cb_10/src/todays_menu.c.o -c cb_10/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/lib/recv_until_delim_n.c.o -c cb_5/lib/recv_until_delim_n.c
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
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/customer.c.o -c cb_5/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/service.c.o -c cb_5/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/table.c.o -c cb_5/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/order.c.o -c cb_5/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/menu.c.o -c cb_5/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/comms.c.o -c cb_5/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -g -o cb_5/src/todays_menu.c.o -c cb_5/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/lib/recv_until_delim_n.c.o -c cb_6/lib/recv_until_delim_n.c
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
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/customer.c.o -c cb_6/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/service.c.o -c cb_6/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/table.c.o -c cb_6/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/order.c.o -c cb_6/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/menu.c.o -c cb_6/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/comms.c.o -c cb_6/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -g -o cb_6/src/todays_menu.c.o -c cb_6/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/lib/recv_until_delim_n.c.o -c cb_2/lib/recv_until_delim_n.c
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
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/customer.c.o -c cb_2/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/service.c.o -c cb_2/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/table.c.o -c cb_2/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/order.c.o -c cb_2/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/menu.c.o -c cb_2/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/comms.c.o -c cb_2/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -g -o cb_2/src/todays_menu.c.o -c cb_2/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/lib/recv_until_delim_n.c.o -c cb_4/lib/recv_until_delim_n.c
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
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/customer.c.o -c cb_4/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/service.c.o -c cb_4/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/table.c.o -c cb_4/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/order.c.o -c cb_4/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/menu.c.o -c cb_4/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/comms.c.o -c cb_4/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -g -o cb_4/src/todays_menu.c.o -c cb_4/src/todays_menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/lib/recv_until_delim_n.c.o -c cb_1/lib/recv_until_delim_n.c
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
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/customer.c.o -c cb_1/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/table_comms.c.o -c cb_1/src/table_comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/service.c.o -c cb_1/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/order.c.o -c cb_1/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/menu.c.o -c cb_1/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -g -o cb_1/src/restaurant.c.o -c cb_1/src/restaurant.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/recv_until_delim_n.c.o -c cb_7/lib/recv_until_delim_n.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/malloc.c.o -c cb_7/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/send_bytes.c.o -c cb_7/lib/send_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/recv_bytes.c.o -c cb_7/lib/recv_bytes.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/memcpy.c.o -c cb_7/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/memcmp.c.o -c cb_7/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/xxprintf.c.o -c cb_7/lib/xxprintf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/conv.c.o -c cb_7/lib/conv.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/list.c.o -c cb_7/lib/list.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/string.c.o -c cb_7/lib/string.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/lib/memset.c.o -c cb_7/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/src/customer.c.o -c cb_7/src/customer.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/src/service.c.o -c cb_7/src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/src/table.c.o -c cb_7/src/table.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/src/order.c.o -c cb_7/src/order.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/src/menu.c.o -c cb_7/src/menu.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/src/comms.c.o -c cb_7/src/comms.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_7/lib -I cb_7/src -I cb_7/include -g -o cb_7/src/todays_menu.c.o -c cb_7/src/todays_menu.c
	$(CXX) $(FLAGS) -o Order_Up_7 cb_7/lib/recv_until_delim_n.c.o cb_7/lib/malloc.c.o cb_7/lib/send_bytes.c.o cb_7/lib/recv_bytes.c.o cb_7/lib/memcpy.c.o cb_7/lib/memcmp.c.o cb_7/lib/xxprintf.c.o cb_7/lib/conv.c.o cb_7/lib/list.c.o cb_7/lib/string.c.o cb_7/lib/memset.c.o cb_7/src/customer.c.o cb_7/src/service.c.o cb_7/src/table.c.o cb_7/src/order.c.o cb_7/src/menu.c.o cb_7/src/comms.c.o cb_7/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_6 cb_6/lib/recv_until_delim_n.c.o cb_6/lib/malloc.c.o cb_6/lib/send_bytes.c.o cb_6/lib/recv_bytes.c.o cb_6/lib/memcpy.c.o cb_6/lib/memcmp.c.o cb_6/lib/xxprintf.c.o cb_6/lib/conv.c.o cb_6/lib/list.c.o cb_6/lib/string.c.o cb_6/lib/memset.c.o cb_6/src/customer.c.o cb_6/src/service.c.o cb_6/src/table.c.o cb_6/src/order.c.o cb_6/src/menu.c.o cb_6/src/comms.c.o cb_6/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_5 cb_5/lib/recv_until_delim_n.c.o cb_5/lib/malloc.c.o cb_5/lib/send_bytes.c.o cb_5/lib/recv_bytes.c.o cb_5/lib/memcpy.c.o cb_5/lib/memcmp.c.o cb_5/lib/xxprintf.c.o cb_5/lib/conv.c.o cb_5/lib/list.c.o cb_5/lib/string.c.o cb_5/lib/memset.c.o cb_5/src/customer.c.o cb_5/src/service.c.o cb_5/src/table.c.o cb_5/src/order.c.o cb_5/src/menu.c.o cb_5/src/comms.c.o cb_5/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_4 cb_4/lib/recv_until_delim_n.c.o cb_4/lib/malloc.c.o cb_4/lib/send_bytes.c.o cb_4/lib/recv_bytes.c.o cb_4/lib/memcpy.c.o cb_4/lib/memcmp.c.o cb_4/lib/xxprintf.c.o cb_4/lib/conv.c.o cb_4/lib/list.c.o cb_4/lib/string.c.o cb_4/lib/memset.c.o cb_4/src/customer.c.o cb_4/src/service.c.o cb_4/src/table.c.o cb_4/src/order.c.o cb_4/src/menu.c.o cb_4/src/comms.c.o cb_4/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_3 cb_3/lib/recv_until_delim_n.c.o cb_3/lib/malloc.c.o cb_3/lib/send_bytes.c.o cb_3/lib/recv_bytes.c.o cb_3/lib/memcpy.c.o cb_3/lib/memcmp.c.o cb_3/lib/xxprintf.c.o cb_3/lib/conv.c.o cb_3/lib/list.c.o cb_3/lib/string.c.o cb_3/lib/memset.c.o cb_3/src/customer.c.o cb_3/src/service.c.o cb_3/src/table.c.o cb_3/src/order.c.o cb_3/src/menu.c.o cb_3/src/comms.c.o cb_3/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_2 cb_2/lib/recv_until_delim_n.c.o cb_2/lib/malloc.c.o cb_2/lib/send_bytes.c.o cb_2/lib/recv_bytes.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/xxprintf.c.o cb_2/lib/conv.c.o cb_2/lib/list.c.o cb_2/lib/string.c.o cb_2/lib/memset.c.o cb_2/src/customer.c.o cb_2/src/service.c.o cb_2/src/table.c.o cb_2/src/order.c.o cb_2/src/menu.c.o cb_2/src/comms.c.o cb_2/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_1 cb_1/lib/recv_until_delim_n.c.o cb_1/lib/malloc.c.o cb_1/lib/send_bytes.c.o cb_1/lib/recv_bytes.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/xxprintf.c.o cb_1/lib/conv.c.o cb_1/lib/list.c.o cb_1/lib/string.c.o cb_1/lib/memset.c.o cb_1/src/customer.c.o cb_1/src/table_comms.c.o cb_1/src/service.c.o cb_1/src/order.c.o cb_1/src/menu.c.o cb_1/src/restaurant.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_9 cb_9/lib/recv_until_delim_n.c.o cb_9/lib/malloc.c.o cb_9/lib/send_bytes.c.o cb_9/lib/recv_bytes.c.o cb_9/lib/memcpy.c.o cb_9/lib/memcmp.c.o cb_9/lib/xxprintf.c.o cb_9/lib/conv.c.o cb_9/lib/list.c.o cb_9/lib/string.c.o cb_9/lib/memset.c.o cb_9/src/customer.c.o cb_9/src/service.c.o cb_9/src/table.c.o cb_9/src/order.c.o cb_9/src/menu.c.o cb_9/src/comms.c.o cb_9/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_8 cb_8/lib/recv_until_delim_n.c.o cb_8/lib/malloc.c.o cb_8/lib/send_bytes.c.o cb_8/lib/recv_bytes.c.o cb_8/lib/memcpy.c.o cb_8/lib/memcmp.c.o cb_8/lib/xxprintf.c.o cb_8/lib/conv.c.o cb_8/lib/list.c.o cb_8/lib/string.c.o cb_8/lib/memset.c.o cb_8/src/customer.c.o cb_8/src/service.c.o cb_8/src/table.c.o cb_8/src/order.c.o cb_8/src/menu.c.o cb_8/src/comms.c.o cb_8/src/todays_menu.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o Order_Up_10 cb_10/lib/recv_until_delim_n.c.o cb_10/lib/malloc.c.o cb_10/lib/send_bytes.c.o cb_10/lib/recv_bytes.c.o cb_10/lib/memcpy.c.o cb_10/lib/memcmp.c.o cb_10/lib/xxprintf.c.o cb_10/lib/conv.c.o cb_10/lib/list.c.o cb_10/lib/string.c.o cb_10/lib/memset.c.o cb_10/src/customer.c.o cb_10/src/service.c.o cb_10/src/table.c.o cb_10/src/order.c.o cb_10/src/menu.c.o cb_10/src/comms.c.o cb_10/src/todays_menu.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_8 -I include -I lib -I src -g -pedantic -O0 -o pov_8/order.c.o -c pov_8/order.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_8 -I include -I lib -I src -g -pedantic -O0 -o pov_8/pov_8.c.o -c pov_8/pov_8.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_7 -I include -I lib -I src -g -pedantic -O0 -o pov_7/order.c.o -c pov_7/order.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_7 -I include -I lib -I src -g -pedantic -O0 -o pov_7/pov_7.c.o -c pov_7/pov_7.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_6 -I include -I lib -I src -g -pedantic -O0 -o pov_6/pov_6.c.o -c pov_6/pov_6.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_6 -I include -I lib -I src -g -pedantic -O0 -o pov_6/order.c.o -c pov_6/order.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_5 -I include -I lib -I src -g -pedantic -O0 -o pov_5/order.c.o -c pov_5/order.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_5 -I include -I lib -I src -g -pedantic -O0 -o pov_5/pov_5.c.o -c pov_5/pov_5.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -pedantic -O0 -o pov_1/pov_1.c.o -c pov_1/pov_1.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -g -pedantic -O0 -o pov_3/pov_3.c.o -c pov_3/pov_3.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -g -pedantic -O0 -o pov_3/order.c.o -c pov_3/order.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_9 -I include -I lib -I src -g -pedantic -O0 -o pov_9/order.c.o -c pov_9/order.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_9 -I include -I lib -I src -g -pedantic -O0 -o pov_9/pov_9.c.o -c pov_9/pov_9.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_4 -I include -I lib -I src -g -pedantic -O0 -o pov_4/order.c.o -c pov_4/order.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_4 -I include -I lib -I src -g -pedantic -O0 -o pov_4/pov_4.c.o -c pov_4/pov_4.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -g -pedantic -O0 -o pov_2/order.c.o -c pov_2/order.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -g -pedantic -O0 -o pov_2/pov_2.c.o -c pov_2/pov_2.c
	$(CXX) $(FLAGS) -o Order_Up_pov_1 pov_1/pov_1.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Order_Up_pov_3 pov_3/pov_3.c.o pov_3/order.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Order_Up_pov_2 pov_2/order.c.o pov_2/pov_2.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Order_Up_pov_5 pov_5/order.c.o pov_5/pov_5.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Order_Up_pov_4 pov_4/order.c.o pov_4/pov_4.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Order_Up_pov_7 pov_7/order.c.o pov_7/pov_7.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Order_Up_pov_6 pov_6/pov_6.c.o pov_6/order.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Order_Up_pov_9 pov_9/order.c.o pov_9/pov_9.c.o $(LPOV) 
	$(CXX) $(FLAGS) -o Order_Up_pov_8 pov_8/order.c.o pov_8/pov_8.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_8/order.c.o pov_8/pov_8.c.o pov_7/order.c.o pov_7/pov_7.c.o pov_6/pov_6.c.o pov_6/order.c.o pov_5/order.c.o pov_5/pov_5.c.o cb_9/lib/recv_until_delim_n.c.o cb_9/lib/malloc.c.o cb_9/lib/send_bytes.c.o cb_9/lib/recv_bytes.c.o cb_9/lib/memcpy.c.o cb_9/lib/memcmp.c.o cb_9/lib/xxprintf.c.o cb_9/lib/conv.c.o cb_9/lib/list.c.o cb_9/lib/string.c.o cb_9/lib/memset.c.o cb_9/src/customer.c.o cb_9/src/service.c.o cb_9/src/table.c.o cb_9/src/order.c.o cb_9/src/menu.c.o cb_9/src/comms.c.o cb_9/src/todays_menu.c.o cb_4/lib/recv_until_delim_n.c.o cb_4/lib/malloc.c.o cb_4/lib/send_bytes.c.o cb_4/lib/recv_bytes.c.o cb_4/lib/memcpy.c.o cb_4/lib/memcmp.c.o cb_4/lib/xxprintf.c.o cb_4/lib/conv.c.o cb_4/lib/list.c.o cb_4/lib/string.c.o cb_4/lib/memset.c.o cb_4/src/customer.c.o cb_4/src/service.c.o cb_4/src/table.c.o cb_4/src/order.c.o cb_4/src/menu.c.o cb_4/src/comms.c.o cb_4/src/todays_menu.c.o cb_9/lib/recv_until_delim_n.c.o cb_9/lib/malloc.c.o cb_9/lib/send_bytes.c.o cb_9/lib/recv_bytes.c.o cb_9/lib/memcpy.c.o cb_9/lib/memcmp.c.o cb_9/lib/xxprintf.c.o cb_9/lib/conv.c.o cb_9/lib/list.c.o cb_9/lib/string.c.o cb_9/lib/memset.c.o cb_9/src/customer.c.o cb_9/src/service.c.o cb_9/src/table.c.o cb_9/src/order.c.o cb_9/src/menu.c.o cb_9/src/comms.c.o cb_9/src/todays_menu.c.o cb_8/lib/recv_until_delim_n.c.o cb_8/lib/malloc.c.o cb_8/lib/send_bytes.c.o cb_8/lib/recv_bytes.c.o cb_8/lib/memcpy.c.o cb_8/lib/memcmp.c.o cb_8/lib/xxprintf.c.o cb_8/lib/conv.c.o cb_8/lib/list.c.o cb_8/lib/string.c.o cb_8/lib/memset.c.o cb_8/src/customer.c.o cb_8/src/service.c.o cb_8/src/table.c.o cb_8/src/order.c.o cb_8/src/menu.c.o cb_8/src/comms.c.o cb_8/src/todays_menu.c.o pov_1/pov_1.c.o cb_3/lib/recv_until_delim_n.c.o cb_3/lib/malloc.c.o cb_3/lib/send_bytes.c.o cb_3/lib/recv_bytes.c.o cb_3/lib/memcpy.c.o cb_3/lib/memcmp.c.o cb_3/lib/xxprintf.c.o cb_3/lib/conv.c.o cb_3/lib/list.c.o cb_3/lib/string.c.o cb_3/lib/memset.c.o cb_3/src/customer.c.o cb_3/src/service.c.o cb_3/src/table.c.o cb_3/src/order.c.o cb_3/src/menu.c.o cb_3/src/comms.c.o cb_3/src/todays_menu.c.o cb_8/lib/recv_until_delim_n.c.o cb_8/lib/malloc.c.o cb_8/lib/send_bytes.c.o cb_8/lib/recv_bytes.c.o cb_8/lib/memcpy.c.o cb_8/lib/memcmp.c.o cb_8/lib/xxprintf.c.o cb_8/lib/conv.c.o cb_8/lib/list.c.o cb_8/lib/string.c.o cb_8/lib/memset.c.o cb_8/src/customer.c.o cb_8/src/service.c.o cb_8/src/table.c.o cb_8/src/order.c.o cb_8/src/menu.c.o cb_8/src/comms.c.o cb_8/src/todays_menu.c.o cb_5/lib/recv_until_delim_n.c.o cb_5/lib/malloc.c.o cb_5/lib/send_bytes.c.o cb_5/lib/recv_bytes.c.o cb_5/lib/memcpy.c.o cb_5/lib/memcmp.c.o cb_5/lib/xxprintf.c.o cb_5/lib/conv.c.o cb_5/lib/list.c.o cb_5/lib/string.c.o cb_5/lib/memset.c.o cb_5/src/customer.c.o cb_5/src/service.c.o cb_5/src/table.c.o cb_5/src/order.c.o cb_5/src/menu.c.o cb_5/src/comms.c.o cb_5/src/todays_menu.c.o cb_3/lib/recv_until_delim_n.c.o cb_3/lib/malloc.c.o cb_3/lib/send_bytes.c.o cb_3/lib/recv_bytes.c.o cb_3/lib/memcpy.c.o cb_3/lib/memcmp.c.o cb_3/lib/xxprintf.c.o cb_3/lib/conv.c.o cb_3/lib/list.c.o cb_3/lib/string.c.o cb_3/lib/memset.c.o cb_3/src/customer.c.o cb_3/src/service.c.o cb_3/src/table.c.o cb_3/src/order.c.o cb_3/src/menu.c.o cb_3/src/comms.c.o cb_3/src/todays_menu.c.o cb_1/lib/recv_until_delim_n.c.o cb_1/lib/malloc.c.o cb_1/lib/send_bytes.c.o cb_1/lib/recv_bytes.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/xxprintf.c.o cb_1/lib/conv.c.o cb_1/lib/list.c.o cb_1/lib/string.c.o cb_1/lib/memset.c.o cb_1/src/customer.c.o cb_1/src/table_comms.c.o cb_1/src/service.c.o cb_1/src/order.c.o cb_1/src/menu.c.o cb_1/src/restaurant.c.o cb_10/lib/recv_until_delim_n.c.o cb_10/lib/malloc.c.o cb_10/lib/send_bytes.c.o cb_10/lib/recv_bytes.c.o cb_10/lib/memcpy.c.o cb_10/lib/memcmp.c.o cb_10/lib/xxprintf.c.o cb_10/lib/conv.c.o cb_10/lib/list.c.o cb_10/lib/string.c.o cb_10/lib/memset.c.o cb_10/src/customer.c.o cb_10/src/service.c.o cb_10/src/table.c.o cb_10/src/order.c.o cb_10/src/menu.c.o cb_10/src/comms.c.o cb_10/src/todays_menu.c.o pov_3/pov_3.c.o pov_3/order.c.o cb_5/lib/recv_until_delim_n.c.o cb_5/lib/malloc.c.o cb_5/lib/send_bytes.c.o cb_5/lib/recv_bytes.c.o cb_5/lib/memcpy.c.o cb_5/lib/memcmp.c.o cb_5/lib/xxprintf.c.o cb_5/lib/conv.c.o cb_5/lib/list.c.o cb_5/lib/string.c.o cb_5/lib/memset.c.o cb_5/src/customer.c.o cb_5/src/service.c.o cb_5/src/table.c.o cb_5/src/order.c.o cb_5/src/menu.c.o cb_5/src/comms.c.o cb_5/src/todays_menu.c.o cb_2/lib/recv_until_delim_n.c.o cb_2/lib/malloc.c.o cb_2/lib/send_bytes.c.o cb_2/lib/recv_bytes.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/xxprintf.c.o cb_2/lib/conv.c.o cb_2/lib/list.c.o cb_2/lib/string.c.o cb_2/lib/memset.c.o cb_2/src/customer.c.o cb_2/src/service.c.o cb_2/src/table.c.o cb_2/src/order.c.o cb_2/src/menu.c.o cb_2/src/comms.c.o cb_2/src/todays_menu.c.o cb_6/lib/recv_until_delim_n.c.o cb_6/lib/malloc.c.o cb_6/lib/send_bytes.c.o cb_6/lib/recv_bytes.c.o cb_6/lib/memcpy.c.o cb_6/lib/memcmp.c.o cb_6/lib/xxprintf.c.o cb_6/lib/conv.c.o cb_6/lib/list.c.o cb_6/lib/string.c.o cb_6/lib/memset.c.o cb_6/src/customer.c.o cb_6/src/service.c.o cb_6/src/table.c.o cb_6/src/order.c.o cb_6/src/menu.c.o cb_6/src/comms.c.o cb_6/src/todays_menu.c.o pov_9/order.c.o pov_9/pov_9.c.o cb_2/lib/recv_until_delim_n.c.o cb_2/lib/malloc.c.o cb_2/lib/send_bytes.c.o cb_2/lib/recv_bytes.c.o cb_2/lib/memcpy.c.o cb_2/lib/memcmp.c.o cb_2/lib/xxprintf.c.o cb_2/lib/conv.c.o cb_2/lib/list.c.o cb_2/lib/string.c.o cb_2/lib/memset.c.o cb_2/src/customer.c.o cb_2/src/service.c.o cb_2/src/table.c.o cb_2/src/order.c.o cb_2/src/menu.c.o cb_2/src/comms.c.o cb_2/src/todays_menu.c.o pov_4/order.c.o pov_4/pov_4.c.o cb_4/lib/recv_until_delim_n.c.o cb_4/lib/malloc.c.o cb_4/lib/send_bytes.c.o cb_4/lib/recv_bytes.c.o cb_4/lib/memcpy.c.o cb_4/lib/memcmp.c.o cb_4/lib/xxprintf.c.o cb_4/lib/conv.c.o cb_4/lib/list.c.o cb_4/lib/string.c.o cb_4/lib/memset.c.o cb_4/src/customer.c.o cb_4/src/service.c.o cb_4/src/table.c.o cb_4/src/order.c.o cb_4/src/menu.c.o cb_4/src/comms.c.o cb_4/src/todays_menu.c.o cb_1/lib/recv_until_delim_n.c.o cb_1/lib/malloc.c.o cb_1/lib/send_bytes.c.o cb_1/lib/recv_bytes.c.o cb_1/lib/memcpy.c.o cb_1/lib/memcmp.c.o cb_1/lib/xxprintf.c.o cb_1/lib/conv.c.o cb_1/lib/list.c.o cb_1/lib/string.c.o cb_1/lib/memset.c.o cb_1/src/customer.c.o cb_1/src/table_comms.c.o cb_1/src/service.c.o cb_1/src/order.c.o cb_1/src/menu.c.o cb_1/src/restaurant.c.o cb_6/lib/recv_until_delim_n.c.o cb_6/lib/malloc.c.o cb_6/lib/send_bytes.c.o cb_6/lib/recv_bytes.c.o cb_6/lib/memcpy.c.o cb_6/lib/memcmp.c.o cb_6/lib/xxprintf.c.o cb_6/lib/conv.c.o cb_6/lib/list.c.o cb_6/lib/string.c.o cb_6/lib/memset.c.o cb_6/src/customer.c.o cb_6/src/service.c.o cb_6/src/table.c.o cb_6/src/order.c.o cb_6/src/menu.c.o cb_6/src/comms.c.o cb_6/src/todays_menu.c.o cb_7/lib/recv_until_delim_n.c.o cb_7/lib/malloc.c.o cb_7/lib/send_bytes.c.o cb_7/lib/recv_bytes.c.o cb_7/lib/memcpy.c.o cb_7/lib/memcmp.c.o cb_7/lib/xxprintf.c.o cb_7/lib/conv.c.o cb_7/lib/list.c.o cb_7/lib/string.c.o cb_7/lib/memset.c.o cb_7/src/customer.c.o cb_7/src/service.c.o cb_7/src/table.c.o cb_7/src/order.c.o cb_7/src/menu.c.o cb_7/src/comms.c.o cb_7/src/todays_menu.c.o cb_10/lib/recv_until_delim_n.c.o cb_10/lib/malloc.c.o cb_10/lib/send_bytes.c.o cb_10/lib/recv_bytes.c.o cb_10/lib/memcpy.c.o cb_10/lib/memcmp.c.o cb_10/lib/xxprintf.c.o cb_10/lib/conv.c.o cb_10/lib/list.c.o cb_10/lib/string.c.o cb_10/lib/memset.c.o cb_10/src/customer.c.o cb_10/src/service.c.o cb_10/src/table.c.o cb_10/src/order.c.o cb_10/src/menu.c.o cb_10/src/comms.c.o cb_10/src/todays_menu.c.o pov_2/order.c.o pov_2/pov_2.c.o cb_7/lib/recv_until_delim_n.c.o cb_7/lib/malloc.c.o cb_7/lib/send_bytes.c.o cb_7/lib/recv_bytes.c.o cb_7/lib/memcpy.c.o cb_7/lib/memcmp.c.o cb_7/lib/xxprintf.c.o cb_7/lib/conv.c.o cb_7/lib/list.c.o cb_7/lib/string.c.o cb_7/lib/memset.c.o cb_7/src/customer.c.o cb_7/src/service.c.o cb_7/src/table.c.o cb_7/src/order.c.o cb_7/src/menu.c.o cb_7/src/comms.c.o cb_7/src/todays_menu.c.o Order_Up_pov_8 Order_Up_pov_7 Order_Up_pov_6 Order_Up_pov_5 Order_Up_9 Order_Up_4_patched Order_Up_9_patched Order_Up_8_patched Order_Up_pov_1 Order_Up_3 Order_Up_8 Order_Up_5_patched Order_Up_3_patched Order_Up_1_patched Order_Up_10 Order_Up_pov_3 Order_Up_5 Order_Up_2_patched Order_Up_6 Order_Up_pov_9 Order_Up_2 Order_Up_pov_4 Order_Up_4 Order_Up_1 Order_Up_6_patched Order_Up_7 Order_Up_10_patched Order_Up_pov_2 Order_Up_7_patched
