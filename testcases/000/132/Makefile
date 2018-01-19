CHAL=REDPILL

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_6/lib -I cb_6/src -I cb_6/include -O0 -g -o cb_6/lib/threads.c.o -c cb_6/lib/threads.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_6/lib -I cb_6/src -I cb_6/include -O0 -g -o cb_6/lib/libc.c.o -c cb_6/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_6/lib -I cb_6/src -I cb_6/include -O0 -g -o cb_6/src/t5.c.o -c cb_6/src/t5.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/libc.c.o -c cb_1/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/kernel.c.o -c cb_1/src/kernel.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/threads.c.o -c cb_3/lib/threads.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/libc.c.o -c cb_3/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/t2.c.o -c cb_3/src/t2.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/threads.c.o -c cb_4/lib/threads.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/libc.c.o -c cb_4/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/src/t3.c.o -c cb_4/src/t3.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/threads.c.o -c cb_2/lib/threads.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/libc.c.o -c cb_2/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/t1.c.o -c cb_2/src/t1.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_5/lib -I cb_5/src -I cb_5/include -O0 -g -o cb_5/lib/threads.c.o -c cb_5/lib/threads.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_5/lib -I cb_5/src -I cb_5/include -O0 -g -o cb_5/lib/libc.c.o -c cb_5/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I cb_5/lib -I cb_5/src -I cb_5/include -O0 -g -o cb_5/src/t4.c.o -c cb_5/src/t4.c
	$(CXX) $(FLAGS) -o REDPILL_6_patched cb_6/lib/threads.c.o cb_6/lib/libc.c.o cb_6/src/t5.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REDPILL_1_patched cb_1/lib/libc.c.o cb_1/src/kernel.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REDPILL_3_patched cb_3/lib/threads.c.o cb_3/lib/libc.c.o cb_3/src/t2.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REDPILL_5_patched cb_5/lib/threads.c.o cb_5/lib/libc.c.o cb_5/src/t4.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REDPILL_2_patched cb_2/lib/threads.c.o cb_2/lib/libc.c.o cb_2/src/t1.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REDPILL_4_patched cb_4/lib/threads.c.o cb_4/lib/libc.c.o cb_4/src/t3.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/threads.c.o -c cb_2/lib/threads.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/lib/libc.c.o -c cb_2/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -O0 -g -o cb_2/src/t1.c.o -c cb_2/src/t1.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/threads.c.o -c cb_3/lib/threads.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/lib/libc.c.o -c cb_3/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_3/lib -I cb_3/src -I cb_3/include -O0 -g -o cb_3/src/t2.c.o -c cb_3/src/t2.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/threads.c.o -c cb_4/lib/threads.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/lib/libc.c.o -c cb_4/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_4/lib -I cb_4/src -I cb_4/include -O0 -g -o cb_4/src/t3.c.o -c cb_4/src/t3.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/lib/libc.c.o -c cb_1/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -O0 -g -o cb_1/src/kernel.c.o -c cb_1/src/kernel.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -O0 -g -o cb_5/lib/threads.c.o -c cb_5/lib/threads.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -O0 -g -o cb_5/lib/libc.c.o -c cb_5/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_5/lib -I cb_5/src -I cb_5/include -O0 -g -o cb_5/src/t4.c.o -c cb_5/src/t4.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -O0 -g -o cb_6/lib/threads.c.o -c cb_6/lib/threads.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -O0 -g -o cb_6/lib/libc.c.o -c cb_6/lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_6/lib -I cb_6/src -I cb_6/include -O0 -g -o cb_6/src/t5.c.o -c cb_6/src/t5.c
	$(CXX) $(FLAGS) -o REDPILL_1 cb_1/lib/libc.c.o cb_1/src/kernel.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REDPILL_2 cb_2/lib/threads.c.o cb_2/lib/libc.c.o cb_2/src/t1.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REDPILL_3 cb_3/lib/threads.c.o cb_3/lib/libc.c.o cb_3/src/t2.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REDPILL_4 cb_4/lib/threads.c.o cb_4/lib/libc.c.o cb_4/src/t3.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REDPILL_5 cb_5/lib/threads.c.o cb_5/lib/libc.c.o cb_5/src/t4.c.o $(LCGC) 
	$(CXX) $(FLAGS) -o REDPILL_6 cb_6/lib/threads.c.o cb_6/lib/libc.c.o cb_6/src/t5.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CXX) $(FLAGS) -o REDPILL_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov.c.o cb_6/lib/threads.c.o cb_6/lib/libc.c.o cb_6/src/t5.c.o cb_1/lib/libc.c.o cb_1/src/kernel.c.o cb_2/lib/threads.c.o cb_2/lib/libc.c.o cb_2/src/t1.c.o cb_3/lib/threads.c.o cb_3/lib/libc.c.o cb_3/src/t2.c.o cb_3/lib/threads.c.o cb_3/lib/libc.c.o cb_3/src/t2.c.o cb_4/lib/threads.c.o cb_4/lib/libc.c.o cb_4/src/t3.c.o cb_1/lib/libc.c.o cb_1/src/kernel.c.o cb_4/lib/threads.c.o cb_4/lib/libc.c.o cb_4/src/t3.c.o cb_5/lib/threads.c.o cb_5/lib/libc.c.o cb_5/src/t4.c.o cb_6/lib/threads.c.o cb_6/lib/libc.c.o cb_6/src/t5.c.o cb_2/lib/threads.c.o cb_2/lib/libc.c.o cb_2/src/t1.c.o cb_5/lib/threads.c.o cb_5/lib/libc.c.o cb_5/src/t4.c.o REDPILL_pov_1 REDPILL_6_patched REDPILL_1_patched REDPILL_2 REDPILL_3_patched REDPILL_3 REDPILL_4 REDPILL_1 REDPILL_4_patched REDPILL_5 REDPILL_6 REDPILL_2_patched REDPILL_5_patched
