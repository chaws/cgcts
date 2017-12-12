CHAL=Packet_Receiver

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -fno-exceptions -fno-rtti -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -fno-exceptions -fno-rtti -o lib/mymath.c.o -c lib/mymath.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -fno-exceptions -fno-rtti -o lib/new_printf.c.o -c lib/new_printf.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -o lib/string.cc.o -c lib/string.cc
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -g -fno-exceptions -fno-rtti -o lib/stdlib.c.o -c lib/stdlib.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -o src/datastream.cc.o -c src/datastream.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -o src/messagerenderer.cc.o -c src/messagerenderer.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -o src/messagehandler.cc.o -c src/messagehandler.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -o src/doublelist.cc.o -c src/doublelist.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -o src/messagepacket.cc.o -c src/messagepacket.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -fno-exceptions -fno-rtti -o src/service.cc.o -c src/service.cc
	$(CC) $(FLAGS) -o Packet_Receiver_patched lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/string.cc.o lib/stdlib.c.o src/datastream.cc.o src/messagerenderer.cc.o src/messagehandler.cc.o src/doublelist.cc.o src/messagepacket.cc.o src/service.cc.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -fno-exceptions -fno-rtti -o lib/malloc.c.o -c lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -fno-exceptions -fno-rtti -o lib/mymath.c.o -c lib/mymath.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -fno-exceptions -fno-rtti -o lib/new_printf.c.o -c lib/new_printf.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -o lib/string.cc.o -c lib/string.cc
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -g -fno-exceptions -fno-rtti -o lib/stdlib.c.o -c lib/stdlib.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -o src/datastream.cc.o -c src/datastream.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -o src/messagerenderer.cc.o -c src/messagerenderer.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -o src/messagehandler.cc.o -c src/messagehandler.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -o src/doublelist.cc.o -c src/doublelist.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -o src/messagepacket.cc.o -c src/messagepacket.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I lib -I src -I include -fno-exceptions -fno-rtti -o src/service.cc.o -c src/service.cc
	$(CC) $(FLAGS) -o Packet_Receiver lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/string.cc.o lib/stdlib.c.o src/datastream.cc.o src/messagerenderer.cc.o src/messagehandler.cc.o src/doublelist.cc.o src/messagepacket.cc.o src/service.cc.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -g -fno-exceptions -fno-rtti -pedantic -O0 -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -g -fno-exceptions -fno-rtti -pedantic -O0 -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(FLAGS) -o Packet_Receiver_pov_2 pov_2/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o Packet_Receiver_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_2/pov.c.o pov_1/pov.c.o lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/string.cc.o lib/stdlib.c.o src/datastream.cc.o src/messagerenderer.cc.o src/messagehandler.cc.o src/doublelist.cc.o src/messagepacket.cc.o src/service.cc.o lib/malloc.c.o lib/mymath.c.o lib/new_printf.c.o lib/string.cc.o lib/stdlib.c.o src/datastream.cc.o src/messagerenderer.cc.o src/messagehandler.cc.o src/doublelist.cc.o src/messagepacket.cc.o src/service.cc.o Packet_Receiver_pov_2 Packet_Receiver_pov_1 Packet_Receiver_patched Packet_Receiver
