CHAL=BIRC

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/printf.c.o -c cb_2/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strdup.c.o -c cb_2/lib/strdup.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strchr.c.o -c cb_2/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/memmove.c.o -c cb_2/lib/memmove.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strcpy.c.o -c cb_2/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strcmp.c.o -c cb_2/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/ctype.c.o -c cb_2/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/exit.c.o -c cb_2/lib/exit.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/memcpy.c.o -c cb_2/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strndup.c.o -c cb_2/lib/strndup.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/memcmp.c.o -c cb_2/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/malloc_common.c.o -c cb_2/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/fread.c.o -c cb_2/lib/fread.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strsep.c.o -c cb_2/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/memchr.c.o -c cb_2/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/fxlat.c.o -c cb_2/lib/fxlat.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strcasestr.c.o -c cb_2/lib/strcasestr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strtoul.c.o -c cb_2/lib/strtoul.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/free.c.o -c cb_2/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/stdio.c.o -c cb_2/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strncpy.c.o -c cb_2/lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strncasecmp.c.o -c cb_2/lib/strncasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/fwrite.c.o -c cb_2/lib/fwrite.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strcasecmp.c.o -c cb_2/lib/strcasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/fflush.c.o -c cb_2/lib/fflush.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/fopen.c.o -c cb_2/lib/fopen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/calloc.c.o -c cb_2/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strtol.c.o -c cb_2/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/memset.c.o -c cb_2/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strstr.c.o -c cb_2/lib/strstr.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/lib/cxa.cc.o -c cb_2/lib/cxa.cc
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/realloc.c.o -c cb_2/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strlen.c.o -c cb_2/lib/strlen.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/user.cc.o -c cb_2/src/user.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/conversation.cc.o -c cb_2/src/conversation.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/brc_protocol.cc.o -c cb_2/src/brc_protocol.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/client_commands.cc.o -c cb_2/src/client_commands.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/brc_packet.cc.o -c cb_2/src/brc_packet.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/brc_command.cc.o -c cb_2/src/brc_command.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/client.cc.o -c cb_2/src/client.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/brc_chat.cc.o -c cb_2/src/brc_chat.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/client_backend.cc.o -c cb_2/src/client_backend.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/chat.cc.o -c cb_2/src/chat.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/brc_default_codes.cc.o -c cb_2/src/brc_default_codes.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/brc_token.cc.o -c cb_2/src/brc_token.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/debug_brc.cc.o -c cb_2/src/debug_brc.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/channel.cc.o -c cb_2/src/channel.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/brc_response.cc.o -c cb_2/src/brc_response.cc
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/printf.c.o -c cb_1/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strdup.c.o -c cb_1/lib/strdup.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strchr.c.o -c cb_1/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/memmove.c.o -c cb_1/lib/memmove.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strcpy.c.o -c cb_1/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strcmp.c.o -c cb_1/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/ctype.c.o -c cb_1/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/exit.c.o -c cb_1/lib/exit.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/memcpy.c.o -c cb_1/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strndup.c.o -c cb_1/lib/strndup.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/memcmp.c.o -c cb_1/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/malloc_common.c.o -c cb_1/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/fread.c.o -c cb_1/lib/fread.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strsep.c.o -c cb_1/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/memchr.c.o -c cb_1/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/fxlat.c.o -c cb_1/lib/fxlat.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strcasestr.c.o -c cb_1/lib/strcasestr.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strtoul.c.o -c cb_1/lib/strtoul.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/free.c.o -c cb_1/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/stdio.c.o -c cb_1/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strncpy.c.o -c cb_1/lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strncasecmp.c.o -c cb_1/lib/strncasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/fwrite.c.o -c cb_1/lib/fwrite.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strcasecmp.c.o -c cb_1/lib/strcasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/fflush.c.o -c cb_1/lib/fflush.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/fopen.c.o -c cb_1/lib/fopen.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/calloc.c.o -c cb_1/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strtol.c.o -c cb_1/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/memset.c.o -c cb_1/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strstr.c.o -c cb_1/lib/strstr.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/lib/cxa.cc.o -c cb_1/lib/cxa.cc
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/realloc.c.o -c cb_1/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strlen.c.o -c cb_1/lib/strlen.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/user.cc.o -c cb_1/src/user.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/conversation.cc.o -c cb_1/src/conversation.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/brc_protocol.cc.o -c cb_1/src/brc_protocol.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/server_backend.cc.o -c cb_1/src/server_backend.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/brc_packet.cc.o -c cb_1/src/brc_packet.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/brc_command.cc.o -c cb_1/src/brc_command.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/brc_chat.cc.o -c cb_1/src/brc_chat.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/command_processor.cc.o -c cb_1/src/command_processor.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/chat.cc.o -c cb_1/src/chat.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/brc_default_codes.cc.o -c cb_1/src/brc_default_codes.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/server.cc.o -c cb_1/src/server.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/brc_token.cc.o -c cb_1/src/brc_token.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/debug_brc.cc.o -c cb_1/src/debug_brc.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/channel.cc.o -c cb_1/src/channel.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -DPATCHED -DPATCHED_1 -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/brc_response.cc.o -c cb_1/src/brc_response.cc
	$(CC) $(FLAGS) -o BIRC_1_patched cb_1/lib/printf.c.o cb_1/lib/strdup.c.o cb_1/lib/strchr.c.o cb_1/lib/memmove.c.o cb_1/lib/malloc.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/exit.c.o cb_1/lib/memcpy.c.o cb_1/lib/strndup.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/fread.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/fxlat.c.o cb_1/lib/strcasestr.c.o cb_1/lib/strtoul.c.o cb_1/lib/free.c.o cb_1/lib/stdio.c.o cb_1/lib/strncpy.c.o cb_1/lib/strncasecmp.c.o cb_1/lib/fwrite.c.o cb_1/lib/strcasecmp.c.o cb_1/lib/fflush.c.o cb_1/lib/fopen.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/strstr.c.o cb_1/lib/cxa.cc.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/user.cc.o cb_1/src/conversation.cc.o cb_1/src/brc_protocol.cc.o cb_1/src/server_backend.cc.o cb_1/src/brc_packet.cc.o cb_1/src/brc_command.cc.o cb_1/src/brc_chat.cc.o cb_1/src/command_processor.cc.o cb_1/src/chat.cc.o cb_1/src/brc_default_codes.cc.o cb_1/src/server.cc.o cb_1/src/brc_token.cc.o cb_1/src/debug_brc.cc.o cb_1/src/channel.cc.o cb_1/src/brc_response.cc.o $(LCGC) 
	$(CC) $(FLAGS) -o BIRC_2_patched cb_2/lib/printf.c.o cb_2/lib/strdup.c.o cb_2/lib/strchr.c.o cb_2/lib/memmove.c.o cb_2/lib/malloc.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/exit.c.o cb_2/lib/memcpy.c.o cb_2/lib/strndup.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/fread.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/fxlat.c.o cb_2/lib/strcasestr.c.o cb_2/lib/strtoul.c.o cb_2/lib/free.c.o cb_2/lib/stdio.c.o cb_2/lib/strncpy.c.o cb_2/lib/strncasecmp.c.o cb_2/lib/fwrite.c.o cb_2/lib/strcasecmp.c.o cb_2/lib/fflush.c.o cb_2/lib/fopen.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/strstr.c.o cb_2/lib/cxa.cc.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/user.cc.o cb_2/src/conversation.cc.o cb_2/src/brc_protocol.cc.o cb_2/src/client_commands.cc.o cb_2/src/brc_packet.cc.o cb_2/src/brc_command.cc.o cb_2/src/client.cc.o cb_2/src/brc_chat.cc.o cb_2/src/client_backend.cc.o cb_2/src/chat.cc.o cb_2/src/brc_default_codes.cc.o cb_2/src/brc_token.cc.o cb_2/src/debug_brc.cc.o cb_2/src/channel.cc.o cb_2/src/brc_response.cc.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/printf.c.o -c cb_2/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strdup.c.o -c cb_2/lib/strdup.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strchr.c.o -c cb_2/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/memmove.c.o -c cb_2/lib/memmove.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/malloc.c.o -c cb_2/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strcpy.c.o -c cb_2/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strcmp.c.o -c cb_2/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/ctype.c.o -c cb_2/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/exit.c.o -c cb_2/lib/exit.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/memcpy.c.o -c cb_2/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strndup.c.o -c cb_2/lib/strndup.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/memcmp.c.o -c cb_2/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/malloc_common.c.o -c cb_2/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/fread.c.o -c cb_2/lib/fread.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strsep.c.o -c cb_2/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/memchr.c.o -c cb_2/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/fxlat.c.o -c cb_2/lib/fxlat.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strcasestr.c.o -c cb_2/lib/strcasestr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strtoul.c.o -c cb_2/lib/strtoul.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/free.c.o -c cb_2/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/stdio.c.o -c cb_2/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strncpy.c.o -c cb_2/lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strncasecmp.c.o -c cb_2/lib/strncasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/fwrite.c.o -c cb_2/lib/fwrite.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strcasecmp.c.o -c cb_2/lib/strcasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/fflush.c.o -c cb_2/lib/fflush.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/fopen.c.o -c cb_2/lib/fopen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/calloc.c.o -c cb_2/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strtol.c.o -c cb_2/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/memset.c.o -c cb_2/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strstr.c.o -c cb_2/lib/strstr.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/lib/cxa.cc.o -c cb_2/lib/cxa.cc
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/realloc.c.o -c cb_2/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_2/lib/strlen.c.o -c cb_2/lib/strlen.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/user.cc.o -c cb_2/src/user.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/conversation.cc.o -c cb_2/src/conversation.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/brc_protocol.cc.o -c cb_2/src/brc_protocol.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/client_commands.cc.o -c cb_2/src/client_commands.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/brc_packet.cc.o -c cb_2/src/brc_packet.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/brc_command.cc.o -c cb_2/src/brc_command.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/client.cc.o -c cb_2/src/client.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/brc_chat.cc.o -c cb_2/src/brc_chat.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/client_backend.cc.o -c cb_2/src/client_backend.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/chat.cc.o -c cb_2/src/chat.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/brc_default_codes.cc.o -c cb_2/src/brc_default_codes.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/brc_token.cc.o -c cb_2/src/brc_token.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/debug_brc.cc.o -c cb_2/src/debug_brc.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/channel.cc.o -c cb_2/src/channel.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_2/lib -I cb_2/src -I cb_2/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_2/src/brc_response.cc.o -c cb_2/src/brc_response.cc
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/printf.c.o -c cb_1/lib/printf.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strdup.c.o -c cb_1/lib/strdup.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strchr.c.o -c cb_1/lib/strchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/memmove.c.o -c cb_1/lib/memmove.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/malloc.c.o -c cb_1/lib/malloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strcpy.c.o -c cb_1/lib/strcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strcmp.c.o -c cb_1/lib/strcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/ctype.c.o -c cb_1/lib/ctype.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/exit.c.o -c cb_1/lib/exit.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/memcpy.c.o -c cb_1/lib/memcpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strndup.c.o -c cb_1/lib/strndup.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/memcmp.c.o -c cb_1/lib/memcmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/malloc_common.c.o -c cb_1/lib/malloc_common.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/fread.c.o -c cb_1/lib/fread.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strsep.c.o -c cb_1/lib/strsep.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/memchr.c.o -c cb_1/lib/memchr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/fxlat.c.o -c cb_1/lib/fxlat.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strcasestr.c.o -c cb_1/lib/strcasestr.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strtoul.c.o -c cb_1/lib/strtoul.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/free.c.o -c cb_1/lib/free.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/stdio.c.o -c cb_1/lib/stdio.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strncpy.c.o -c cb_1/lib/strncpy.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strncasecmp.c.o -c cb_1/lib/strncasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/fwrite.c.o -c cb_1/lib/fwrite.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strcasecmp.c.o -c cb_1/lib/strcasecmp.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/fflush.c.o -c cb_1/lib/fflush.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/fopen.c.o -c cb_1/lib/fopen.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/calloc.c.o -c cb_1/lib/calloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strtol.c.o -c cb_1/lib/strtol.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/memset.c.o -c cb_1/lib/memset.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strstr.c.o -c cb_1/lib/strstr.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/lib/cxa.cc.o -c cb_1/lib/cxa.cc
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/realloc.c.o -c cb_1/lib/realloc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -o cb_1/lib/strlen.c.o -c cb_1/lib/strlen.c
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/user.cc.o -c cb_1/src/user.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/conversation.cc.o -c cb_1/src/conversation.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/brc_protocol.cc.o -c cb_1/src/brc_protocol.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/server_backend.cc.o -c cb_1/src/server_backend.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/brc_packet.cc.o -c cb_1/src/brc_packet.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/brc_command.cc.o -c cb_1/src/brc_command.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/brc_chat.cc.o -c cb_1/src/brc_chat.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/command_processor.cc.o -c cb_1/src/command_processor.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/chat.cc.o -c cb_1/src/chat.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/brc_default_codes.cc.o -c cb_1/src/brc_default_codes.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/server.cc.o -c cb_1/src/server.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/brc_token.cc.o -c cb_1/src/brc_token.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/debug_brc.cc.o -c cb_1/src/debug_brc.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/channel.cc.o -c cb_1/src/channel.cc
	$(CXX) $(CXXFLAGS) $(INCLUDE) -I cb_1/lib -I cb_1/src -I cb_1/include -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -o cb_1/src/brc_response.cc.o -c cb_1/src/brc_response.cc
	$(CC) $(FLAGS) -o BIRC_1 cb_1/lib/printf.c.o cb_1/lib/strdup.c.o cb_1/lib/strchr.c.o cb_1/lib/memmove.c.o cb_1/lib/malloc.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/exit.c.o cb_1/lib/memcpy.c.o cb_1/lib/strndup.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/fread.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/fxlat.c.o cb_1/lib/strcasestr.c.o cb_1/lib/strtoul.c.o cb_1/lib/free.c.o cb_1/lib/stdio.c.o cb_1/lib/strncpy.c.o cb_1/lib/strncasecmp.c.o cb_1/lib/fwrite.c.o cb_1/lib/strcasecmp.c.o cb_1/lib/fflush.c.o cb_1/lib/fopen.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/strstr.c.o cb_1/lib/cxa.cc.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/user.cc.o cb_1/src/conversation.cc.o cb_1/src/brc_protocol.cc.o cb_1/src/server_backend.cc.o cb_1/src/brc_packet.cc.o cb_1/src/brc_command.cc.o cb_1/src/brc_chat.cc.o cb_1/src/command_processor.cc.o cb_1/src/chat.cc.o cb_1/src/brc_default_codes.cc.o cb_1/src/server.cc.o cb_1/src/brc_token.cc.o cb_1/src/debug_brc.cc.o cb_1/src/channel.cc.o cb_1/src/brc_response.cc.o $(LCGC) 
	$(CC) $(FLAGS) -o BIRC_2 cb_2/lib/printf.c.o cb_2/lib/strdup.c.o cb_2/lib/strchr.c.o cb_2/lib/memmove.c.o cb_2/lib/malloc.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/exit.c.o cb_2/lib/memcpy.c.o cb_2/lib/strndup.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/fread.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/fxlat.c.o cb_2/lib/strcasestr.c.o cb_2/lib/strtoul.c.o cb_2/lib/free.c.o cb_2/lib/stdio.c.o cb_2/lib/strncpy.c.o cb_2/lib/strncasecmp.c.o cb_2/lib/fwrite.c.o cb_2/lib/strcasecmp.c.o cb_2/lib/fflush.c.o cb_2/lib/fopen.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/strstr.c.o cb_2/lib/cxa.cc.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/user.cc.o cb_2/src/conversation.cc.o cb_2/src/brc_protocol.cc.o cb_2/src/client_commands.cc.o cb_2/src/brc_packet.cc.o cb_2/src/brc_command.cc.o cb_2/src/client.cc.o cb_2/src/brc_chat.cc.o cb_2/src/client_backend.cc.o cb_2/src/chat.cc.o cb_2/src/brc_default_codes.cc.o cb_2/src/brc_token.cc.o cb_2/src/debug_brc.cc.o cb_2/src/channel.cc.o cb_2/src/brc_response.cc.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -fno-exceptions -fno-rtti -DCPLUSPLUS -O3 -g -pedantic -O0 -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(FLAGS) -o BIRC_pov_1 pov_1/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_1/pov.c.o cb_2/lib/printf.c.o cb_2/lib/strdup.c.o cb_2/lib/strchr.c.o cb_2/lib/memmove.c.o cb_2/lib/malloc.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/exit.c.o cb_2/lib/memcpy.c.o cb_2/lib/strndup.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/fread.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/fxlat.c.o cb_2/lib/strcasestr.c.o cb_2/lib/strtoul.c.o cb_2/lib/free.c.o cb_2/lib/stdio.c.o cb_2/lib/strncpy.c.o cb_2/lib/strncasecmp.c.o cb_2/lib/fwrite.c.o cb_2/lib/strcasecmp.c.o cb_2/lib/fflush.c.o cb_2/lib/fopen.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/strstr.c.o cb_2/lib/cxa.cc.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/user.cc.o cb_2/src/conversation.cc.o cb_2/src/brc_protocol.cc.o cb_2/src/client_commands.cc.o cb_2/src/brc_packet.cc.o cb_2/src/brc_command.cc.o cb_2/src/client.cc.o cb_2/src/brc_chat.cc.o cb_2/src/client_backend.cc.o cb_2/src/chat.cc.o cb_2/src/brc_default_codes.cc.o cb_2/src/brc_token.cc.o cb_2/src/debug_brc.cc.o cb_2/src/channel.cc.o cb_2/src/brc_response.cc.o cb_2/lib/printf.c.o cb_2/lib/strdup.c.o cb_2/lib/strchr.c.o cb_2/lib/memmove.c.o cb_2/lib/malloc.c.o cb_2/lib/strcpy.c.o cb_2/lib/strcmp.c.o cb_2/lib/ctype.c.o cb_2/lib/exit.c.o cb_2/lib/memcpy.c.o cb_2/lib/strndup.c.o cb_2/lib/memcmp.c.o cb_2/lib/malloc_common.c.o cb_2/lib/fread.c.o cb_2/lib/strsep.c.o cb_2/lib/memchr.c.o cb_2/lib/fxlat.c.o cb_2/lib/strcasestr.c.o cb_2/lib/strtoul.c.o cb_2/lib/free.c.o cb_2/lib/stdio.c.o cb_2/lib/strncpy.c.o cb_2/lib/strncasecmp.c.o cb_2/lib/fwrite.c.o cb_2/lib/strcasecmp.c.o cb_2/lib/fflush.c.o cb_2/lib/fopen.c.o cb_2/lib/calloc.c.o cb_2/lib/strtol.c.o cb_2/lib/memset.c.o cb_2/lib/strstr.c.o cb_2/lib/cxa.cc.o cb_2/lib/realloc.c.o cb_2/lib/strlen.c.o cb_2/src/user.cc.o cb_2/src/conversation.cc.o cb_2/src/brc_protocol.cc.o cb_2/src/client_commands.cc.o cb_2/src/brc_packet.cc.o cb_2/src/brc_command.cc.o cb_2/src/client.cc.o cb_2/src/brc_chat.cc.o cb_2/src/client_backend.cc.o cb_2/src/chat.cc.o cb_2/src/brc_default_codes.cc.o cb_2/src/brc_token.cc.o cb_2/src/debug_brc.cc.o cb_2/src/channel.cc.o cb_2/src/brc_response.cc.o cb_1/lib/printf.c.o cb_1/lib/strdup.c.o cb_1/lib/strchr.c.o cb_1/lib/memmove.c.o cb_1/lib/malloc.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/exit.c.o cb_1/lib/memcpy.c.o cb_1/lib/strndup.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/fread.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/fxlat.c.o cb_1/lib/strcasestr.c.o cb_1/lib/strtoul.c.o cb_1/lib/free.c.o cb_1/lib/stdio.c.o cb_1/lib/strncpy.c.o cb_1/lib/strncasecmp.c.o cb_1/lib/fwrite.c.o cb_1/lib/strcasecmp.c.o cb_1/lib/fflush.c.o cb_1/lib/fopen.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/strstr.c.o cb_1/lib/cxa.cc.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/user.cc.o cb_1/src/conversation.cc.o cb_1/src/brc_protocol.cc.o cb_1/src/server_backend.cc.o cb_1/src/brc_packet.cc.o cb_1/src/brc_command.cc.o cb_1/src/brc_chat.cc.o cb_1/src/command_processor.cc.o cb_1/src/chat.cc.o cb_1/src/brc_default_codes.cc.o cb_1/src/server.cc.o cb_1/src/brc_token.cc.o cb_1/src/debug_brc.cc.o cb_1/src/channel.cc.o cb_1/src/brc_response.cc.o cb_1/lib/printf.c.o cb_1/lib/strdup.c.o cb_1/lib/strchr.c.o cb_1/lib/memmove.c.o cb_1/lib/malloc.c.o cb_1/lib/strcpy.c.o cb_1/lib/strcmp.c.o cb_1/lib/ctype.c.o cb_1/lib/exit.c.o cb_1/lib/memcpy.c.o cb_1/lib/strndup.c.o cb_1/lib/memcmp.c.o cb_1/lib/malloc_common.c.o cb_1/lib/fread.c.o cb_1/lib/strsep.c.o cb_1/lib/memchr.c.o cb_1/lib/fxlat.c.o cb_1/lib/strcasestr.c.o cb_1/lib/strtoul.c.o cb_1/lib/free.c.o cb_1/lib/stdio.c.o cb_1/lib/strncpy.c.o cb_1/lib/strncasecmp.c.o cb_1/lib/fwrite.c.o cb_1/lib/strcasecmp.c.o cb_1/lib/fflush.c.o cb_1/lib/fopen.c.o cb_1/lib/calloc.c.o cb_1/lib/strtol.c.o cb_1/lib/memset.c.o cb_1/lib/strstr.c.o cb_1/lib/cxa.cc.o cb_1/lib/realloc.c.o cb_1/lib/strlen.c.o cb_1/src/user.cc.o cb_1/src/conversation.cc.o cb_1/src/brc_protocol.cc.o cb_1/src/server_backend.cc.o cb_1/src/brc_packet.cc.o cb_1/src/brc_command.cc.o cb_1/src/brc_chat.cc.o cb_1/src/command_processor.cc.o cb_1/src/chat.cc.o cb_1/src/brc_default_codes.cc.o cb_1/src/server.cc.o cb_1/src/brc_token.cc.o cb_1/src/debug_brc.cc.o cb_1/src/channel.cc.o cb_1/src/brc_response.cc.o BIRC_pov_1 BIRC_2_patched BIRC_2 BIRC_1_patched BIRC_1
