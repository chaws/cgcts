CHAL=CableGrind

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
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -fcommon -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -fcommon -o lib/libdupe.c.o -c lib/libdupe.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -fcommon -o src/customprotos.c.o -c src/customprotos.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -fcommon -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -fcommon -o src/cablegrind.c.o -c src/cablegrind.c
	$(CC) $(CFLAGS) $(INCLUDE) -DPATCHED -I lib -I src -I include -O0 -g -fcommon -o src/cablegrindprotos.c.o -c src/cablegrindprotos.c
	$(CC) $(FLAGS) -o CableGrind_patched lib/libc.c.o lib/libdupe.c.o src/customprotos.c.o src/service.c.o src/cablegrind.c.o src/cablegrindprotos.c.o $(LCGC) 

vulnerable:
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o lib/libc.c.o -c lib/libc.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o lib/libdupe.c.o -c lib/libdupe.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o src/customprotos.c.o -c src/customprotos.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o src/service.c.o -c src/service.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o src/cablegrind.c.o -c src/cablegrind.c
	$(CC) $(CFLAGS) $(INCLUDE) -I lib -I src -I include -O0 -g -fcommon -o src/cablegrindprotos.c.o -c src/cablegrindprotos.c
	$(CC) $(FLAGS) -o CableGrind lib/libc.c.o lib/libdupe.c.o src/customprotos.c.o src/service.c.o src/cablegrind.c.o src/cablegrindprotos.c.o $(LCGC) 

pov: $(LIBPOV)
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_98 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_98/pov.c.o -c pov_98/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_97 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_97/pov.c.o -c pov_97/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_95 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_95/pov.c.o -c pov_95/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_90 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_90/pov.c.o -c pov_90/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_9 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_9/pov.c.o -c pov_9/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_89 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_89/pov.c.o -c pov_89/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_87 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_87/pov.c.o -c pov_87/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_84 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_84/pov.c.o -c pov_84/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_81 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_81/pov.c.o -c pov_81/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_80 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_80/pov.c.o -c pov_80/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_79 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_79/pov.c.o -c pov_79/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_76 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_76/pov.c.o -c pov_76/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_75 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_75/pov.c.o -c pov_75/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_86 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_86/pov.c.o -c pov_86/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_74 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_74/pov.c.o -c pov_74/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_71 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_71/pov.c.o -c pov_71/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_69 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_69/pov.c.o -c pov_69/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_91 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_91/pov.c.o -c pov_91/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_66 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_66/pov.c.o -c pov_66/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_64 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_64/pov.c.o -c pov_64/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_63 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_63/pov.c.o -c pov_63/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_61 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_61/pov.c.o -c pov_61/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_60 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_60/pov.c.o -c pov_60/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_6 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_6/pov.c.o -c pov_6/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_59 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_59/pov.c.o -c pov_59/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_56 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_56/pov.c.o -c pov_56/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_53 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_53/pov.c.o -c pov_53/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_52 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_52/pov.c.o -c pov_52/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_51 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_51/pov.c.o -c pov_51/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_73 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_73/pov.c.o -c pov_73/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_62 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_62/pov.c.o -c pov_62/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_5 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_5/pov.c.o -c pov_5/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_49 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_49/pov.c.o -c pov_49/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_83 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_83/pov.c.o -c pov_83/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_48 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_48/pov.c.o -c pov_48/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_67 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_67/pov.c.o -c pov_67/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_55 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_55/pov.c.o -c pov_55/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_46 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_46/pov.c.o -c pov_46/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_99 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_99/pov.c.o -c pov_99/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_43 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_43/pov.c.o -c pov_43/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_54 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_54/pov.c.o -c pov_54/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_42 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_42/pov.c.o -c pov_42/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_41 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_41/pov.c.o -c pov_41/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_39 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_39/pov.c.o -c pov_39/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_38 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_38/pov.c.o -c pov_38/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_37 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_37/pov.c.o -c pov_37/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_93 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_93/pov.c.o -c pov_93/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_35 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_35/pov.c.o -c pov_35/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_88 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_88/pov.c.o -c pov_88/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_33 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_33/pov.c.o -c pov_33/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_32 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_32/pov.c.o -c pov_32/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_31 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_31/pov.c.o -c pov_31/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_68 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_68/pov.c.o -c pov_68/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_30 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_30/pov.c.o -c pov_30/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_3 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_3/pov.c.o -c pov_3/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_34 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_34/pov.c.o -c pov_34/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_29 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_29/pov.c.o -c pov_29/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_28 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_28/pov.c.o -c pov_28/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_72 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_72/pov.c.o -c pov_72/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_27 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_27/pov.c.o -c pov_27/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_25 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_25/pov.c.o -c pov_25/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_23 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_23/pov.c.o -c pov_23/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_22 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_22/pov.c.o -c pov_22/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_20 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_20/pov.c.o -c pov_20/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_57 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_57/pov.c.o -c pov_57/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_4 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_4/pov.c.o -c pov_4/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_135 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_135/pov.c.o -c pov_135/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_78 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_78/pov.c.o -c pov_78/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_16 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_16/pov.c.o -c pov_16/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_107 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_107/pov.c.o -c pov_107/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_173 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_173/pov.c.o -c pov_173/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_132 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_132/pov.c.o -c pov_132/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_45 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_45/pov.c.o -c pov_45/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_108 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_108/pov.c.o -c pov_108/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_157 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_157/pov.c.o -c pov_157/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_122 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_122/pov.c.o -c pov_122/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_131 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_131/pov.c.o -c pov_131/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_101 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_101/pov.c.o -c pov_101/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_121 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_121/pov.c.o -c pov_121/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_128 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_128/pov.c.o -c pov_128/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_117 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_117/pov.c.o -c pov_117/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_164 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_164/pov.c.o -c pov_164/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_112 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_112/pov.c.o -c pov_112/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_120 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_120/pov.c.o -c pov_120/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_102 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_102/pov.c.o -c pov_102/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_110 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_110/pov.c.o -c pov_110/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_77 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_77/pov.c.o -c pov_77/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_147 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_147/pov.c.o -c pov_147/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_15 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_15/pov.c.o -c pov_15/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_141 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_141/pov.c.o -c pov_141/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_70 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_70/pov.c.o -c pov_70/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_50 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_50/pov.c.o -c pov_50/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_148 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_148/pov.c.o -c pov_148/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_92 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_92/pov.c.o -c pov_92/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_163 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_163/pov.c.o -c pov_163/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_118 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_118/pov.c.o -c pov_118/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_125 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_125/pov.c.o -c pov_125/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_96 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_96/pov.c.o -c pov_96/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_65 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_65/pov.c.o -c pov_65/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_58 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_58/pov.c.o -c pov_58/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_160 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_160/pov.c.o -c pov_160/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_14 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_14/pov.c.o -c pov_14/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_175 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_175/pov.c.o -c pov_175/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_85 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_85/pov.c.o -c pov_85/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_181 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_181/pov.c.o -c pov_181/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_8 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_8/pov.c.o -c pov_8/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_44 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_44/pov.c.o -c pov_44/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_109 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_109/pov.c.o -c pov_109/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_127 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_127/pov.c.o -c pov_127/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_144 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_144/pov.c.o -c pov_144/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_119 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_119/pov.c.o -c pov_119/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_19 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_19/pov.c.o -c pov_19/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_36 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_36/pov.c.o -c pov_36/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_129 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_129/pov.c.o -c pov_129/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_133 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_133/pov.c.o -c pov_133/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_154 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_154/pov.c.o -c pov_154/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_123 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_123/pov.c.o -c pov_123/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_138 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_138/pov.c.o -c pov_138/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_105 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_105/pov.c.o -c pov_105/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_104 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_104/pov.c.o -c pov_104/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_17 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_17/pov.c.o -c pov_17/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_134 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_134/pov.c.o -c pov_134/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_100 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_100/pov.c.o -c pov_100/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_155 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_155/pov.c.o -c pov_155/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_106 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_106/pov.c.o -c pov_106/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_40 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_40/pov.c.o -c pov_40/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_137 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_137/pov.c.o -c pov_137/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_24 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_24/pov.c.o -c pov_24/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_169 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_169/pov.c.o -c pov_169/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_111 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_111/pov.c.o -c pov_111/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_172 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_172/pov.c.o -c pov_172/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_103 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_103/pov.c.o -c pov_103/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_124 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_124/pov.c.o -c pov_124/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_136 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_136/pov.c.o -c pov_136/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_12 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_12/pov.c.o -c pov_12/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_126 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_126/pov.c.o -c pov_126/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_140 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_140/pov.c.o -c pov_140/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_130 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_130/pov.c.o -c pov_130/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_1 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_1/pov.c.o -c pov_1/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_150 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_150/pov.c.o -c pov_150/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_114 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_114/pov.c.o -c pov_114/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_176 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_176/pov.c.o -c pov_176/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_82 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_82/pov.c.o -c pov_82/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_47 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_47/pov.c.o -c pov_47/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_113 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_113/pov.c.o -c pov_113/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_139 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_139/pov.c.o -c pov_139/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_142 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_142/pov.c.o -c pov_142/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_143 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_143/pov.c.o -c pov_143/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_7 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_7/pov.c.o -c pov_7/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_116 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_116/pov.c.o -c pov_116/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_146 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_146/pov.c.o -c pov_146/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_159 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_159/pov.c.o -c pov_159/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_149 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_149/pov.c.o -c pov_149/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_145 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_145/pov.c.o -c pov_145/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_18 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_18/pov.c.o -c pov_18/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_151 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_151/pov.c.o -c pov_151/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_152 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_152/pov.c.o -c pov_152/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_94 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_94/pov.c.o -c pov_94/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_162 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_162/pov.c.o -c pov_162/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_156 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_156/pov.c.o -c pov_156/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_158 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_158/pov.c.o -c pov_158/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_21 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_21/pov.c.o -c pov_21/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_161 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_161/pov.c.o -c pov_161/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_13 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_13/pov.c.o -c pov_13/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_165 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_165/pov.c.o -c pov_165/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_166 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_166/pov.c.o -c pov_166/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_167 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_167/pov.c.o -c pov_167/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_153 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_153/pov.c.o -c pov_153/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_168 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_168/pov.c.o -c pov_168/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_170 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_170/pov.c.o -c pov_170/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_11 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_11/pov.c.o -c pov_11/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_115 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_115/pov.c.o -c pov_115/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_171 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_171/pov.c.o -c pov_171/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_178 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_178/pov.c.o -c pov_178/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_174 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_174/pov.c.o -c pov_174/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_26 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_26/pov.c.o -c pov_26/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_177 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_177/pov.c.o -c pov_177/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_179 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_179/pov.c.o -c pov_179/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_10 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_10/pov.c.o -c pov_10/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_180 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_180/pov.c.o -c pov_180/pov.c
	$(CC) $(CFLAGS) $(POV_INCLUDE) -DNPATCHED -I pov_2 -I include -I lib -I src -O0 -g -fcommon -pedantic -o pov_2/pov.c.o -c pov_2/pov.c
	$(CC) $(FLAGS) -o CableGrind_pov_165 pov_165/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_164 pov_164/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_167 pov_167/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_166 pov_166/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_161 pov_161/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_160 pov_160/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_30 pov_30/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_31 pov_31/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_32 pov_32/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_33 pov_33/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_34 pov_34/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_35 pov_35/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_36 pov_36/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_37 pov_37/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_38 pov_38/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_39 pov_39/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_162 pov_162/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_129 pov_129/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_128 pov_128/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_121 pov_121/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_120 pov_120/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_123 pov_123/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_122 pov_122/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_125 pov_125/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_124 pov_124/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_127 pov_127/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_126 pov_126/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_111 pov_111/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_45 pov_45/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_44 pov_44/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_47 pov_47/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_46 pov_46/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_41 pov_41/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_40 pov_40/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_43 pov_43/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_42 pov_42/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_49 pov_49/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_48 pov_48/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_8 pov_8/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_9 pov_9/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_118 pov_118/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_119 pov_119/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_114 pov_114/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_1 pov_1/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_116 pov_116/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_117 pov_117/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_110 pov_110/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_5 pov_5/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_112 pov_112/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_113 pov_113/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_103 pov_103/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_102 pov_102/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_101 pov_101/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_100 pov_100/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_107 pov_107/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_106 pov_106/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_105 pov_105/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_104 pov_104/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_109 pov_109/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_108 pov_108/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_163 pov_163/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_56 pov_56/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_57 pov_57/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_54 pov_54/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_55 pov_55/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_52 pov_52/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_53 pov_53/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_50 pov_50/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_51 pov_51/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_181 pov_181/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_180 pov_180/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_58 pov_58/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_59 pov_59/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_176 pov_176/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_177 pov_177/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_174 pov_174/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_175 pov_175/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_172 pov_172/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_173 pov_173/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_170 pov_170/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_171 pov_171/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_4 pov_4/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_178 pov_178/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_179 pov_179/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_115 pov_115/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_2 pov_2/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_69 pov_69/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_68 pov_68/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_63 pov_63/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_62 pov_62/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_61 pov_61/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_60 pov_60/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_67 pov_67/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_66 pov_66/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_65 pov_65/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_64 pov_64/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_6 pov_6/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_159 pov_159/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_7 pov_7/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_81 pov_81/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_80 pov_80/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_83 pov_83/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_82 pov_82/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_85 pov_85/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_84 pov_84/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_87 pov_87/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_86 pov_86/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_89 pov_89/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_88 pov_88/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_169 pov_169/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_168 pov_168/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_3 pov_3/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_78 pov_78/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_79 pov_79/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_74 pov_74/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_75 pov_75/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_76 pov_76/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_77 pov_77/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_70 pov_70/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_71 pov_71/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_72 pov_72/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_73 pov_73/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_92 pov_92/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_93 pov_93/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_90 pov_90/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_91 pov_91/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_96 pov_96/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_97 pov_97/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_94 pov_94/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_95 pov_95/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_150 pov_150/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_151 pov_151/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_98 pov_98/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_99 pov_99/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_154 pov_154/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_155 pov_155/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_156 pov_156/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_157 pov_157/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_18 pov_18/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_19 pov_19/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_12 pov_12/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_13 pov_13/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_10 pov_10/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_11 pov_11/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_16 pov_16/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_17 pov_17/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_14 pov_14/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_15 pov_15/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_158 pov_158/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_149 pov_149/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_148 pov_148/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_147 pov_147/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_146 pov_146/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_145 pov_145/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_144 pov_144/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_143 pov_143/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_142 pov_142/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_141 pov_141/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_140 pov_140/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_29 pov_29/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_28 pov_28/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_27 pov_27/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_26 pov_26/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_25 pov_25/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_24 pov_24/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_23 pov_23/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_22 pov_22/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_21 pov_21/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_20 pov_20/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_152 pov_152/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_153 pov_153/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_138 pov_138/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_139 pov_139/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_132 pov_132/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_133 pov_133/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_130 pov_130/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_131 pov_131/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_136 pov_136/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_137 pov_137/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_134 pov_134/pov.c.o $(LPOV) 
	$(CC) $(FLAGS) -o CableGrind_pov_135 pov_135/pov.c.o $(LPOV) 

$(LIBS):
	$(MAKE) -C $(dir $@) $(notdir $@)

clean:
	rm -f pov_98/pov.c.o pov_97/pov.c.o pov_95/pov.c.o pov_90/pov.c.o pov_9/pov.c.o pov_89/pov.c.o pov_87/pov.c.o pov_84/pov.c.o pov_81/pov.c.o pov_80/pov.c.o pov_79/pov.c.o pov_76/pov.c.o pov_75/pov.c.o pov_86/pov.c.o pov_74/pov.c.o pov_71/pov.c.o pov_69/pov.c.o pov_91/pov.c.o pov_66/pov.c.o pov_64/pov.c.o pov_63/pov.c.o pov_61/pov.c.o pov_60/pov.c.o pov_6/pov.c.o pov_59/pov.c.o pov_56/pov.c.o pov_53/pov.c.o pov_52/pov.c.o pov_51/pov.c.o pov_73/pov.c.o pov_62/pov.c.o pov_5/pov.c.o pov_49/pov.c.o pov_83/pov.c.o pov_48/pov.c.o pov_67/pov.c.o pov_55/pov.c.o pov_46/pov.c.o pov_99/pov.c.o pov_43/pov.c.o pov_54/pov.c.o pov_42/pov.c.o pov_41/pov.c.o pov_39/pov.c.o pov_38/pov.c.o pov_37/pov.c.o pov_93/pov.c.o pov_35/pov.c.o pov_88/pov.c.o pov_33/pov.c.o pov_32/pov.c.o pov_31/pov.c.o pov_68/pov.c.o pov_30/pov.c.o pov_3/pov.c.o pov_34/pov.c.o pov_29/pov.c.o pov_28/pov.c.o pov_72/pov.c.o pov_27/pov.c.o pov_25/pov.c.o pov_23/pov.c.o pov_22/pov.c.o pov_20/pov.c.o pov_57/pov.c.o pov_4/pov.c.o pov_135/pov.c.o pov_78/pov.c.o pov_16/pov.c.o pov_107/pov.c.o pov_173/pov.c.o pov_132/pov.c.o pov_45/pov.c.o pov_108/pov.c.o pov_157/pov.c.o pov_122/pov.c.o pov_131/pov.c.o pov_101/pov.c.o pov_121/pov.c.o pov_128/pov.c.o pov_117/pov.c.o pov_164/pov.c.o pov_112/pov.c.o pov_120/pov.c.o pov_102/pov.c.o pov_110/pov.c.o pov_77/pov.c.o pov_147/pov.c.o pov_15/pov.c.o pov_141/pov.c.o pov_70/pov.c.o pov_50/pov.c.o pov_148/pov.c.o pov_92/pov.c.o pov_163/pov.c.o pov_118/pov.c.o pov_125/pov.c.o pov_96/pov.c.o pov_65/pov.c.o pov_58/pov.c.o pov_160/pov.c.o pov_14/pov.c.o pov_175/pov.c.o pov_85/pov.c.o pov_181/pov.c.o pov_8/pov.c.o pov_44/pov.c.o pov_109/pov.c.o lib/libc.c.o lib/libdupe.c.o src/customprotos.c.o src/service.c.o src/cablegrind.c.o src/cablegrindprotos.c.o pov_127/pov.c.o pov_144/pov.c.o pov_119/pov.c.o pov_19/pov.c.o pov_36/pov.c.o pov_129/pov.c.o pov_133/pov.c.o pov_154/pov.c.o pov_123/pov.c.o pov_138/pov.c.o lib/libc.c.o lib/libdupe.c.o src/customprotos.c.o src/service.c.o src/cablegrind.c.o src/cablegrindprotos.c.o pov_105/pov.c.o pov_104/pov.c.o pov_17/pov.c.o pov_134/pov.c.o pov_100/pov.c.o pov_155/pov.c.o pov_106/pov.c.o pov_40/pov.c.o pov_137/pov.c.o pov_24/pov.c.o pov_169/pov.c.o pov_111/pov.c.o pov_172/pov.c.o pov_103/pov.c.o pov_124/pov.c.o pov_136/pov.c.o pov_12/pov.c.o pov_126/pov.c.o pov_140/pov.c.o pov_130/pov.c.o pov_1/pov.c.o pov_150/pov.c.o pov_114/pov.c.o pov_176/pov.c.o pov_82/pov.c.o pov_47/pov.c.o pov_113/pov.c.o pov_139/pov.c.o pov_142/pov.c.o pov_143/pov.c.o pov_7/pov.c.o pov_116/pov.c.o pov_146/pov.c.o pov_159/pov.c.o pov_149/pov.c.o pov_145/pov.c.o pov_18/pov.c.o pov_151/pov.c.o pov_152/pov.c.o pov_94/pov.c.o pov_162/pov.c.o pov_156/pov.c.o pov_158/pov.c.o pov_21/pov.c.o pov_161/pov.c.o pov_13/pov.c.o pov_165/pov.c.o pov_166/pov.c.o pov_167/pov.c.o pov_153/pov.c.o pov_168/pov.c.o pov_170/pov.c.o pov_11/pov.c.o pov_115/pov.c.o pov_171/pov.c.o pov_178/pov.c.o pov_174/pov.c.o pov_26/pov.c.o pov_177/pov.c.o pov_179/pov.c.o pov_10/pov.c.o pov_180/pov.c.o pov_2/pov.c.o CableGrind_pov_98 CableGrind_pov_97 CableGrind_pov_95 CableGrind_pov_90 CableGrind_pov_9 CableGrind_pov_89 CableGrind_pov_87 CableGrind_pov_84 CableGrind_pov_81 CableGrind_pov_80 CableGrind_pov_79 CableGrind_pov_76 CableGrind_pov_75 CableGrind_pov_86 CableGrind_pov_74 CableGrind_pov_71 CableGrind_pov_69 CableGrind_pov_91 CableGrind_pov_66 CableGrind_pov_64 CableGrind_pov_63 CableGrind_pov_61 CableGrind_pov_60 CableGrind_pov_6 CableGrind_pov_59 CableGrind_pov_56 CableGrind_pov_53 CableGrind_pov_52 CableGrind_pov_51 CableGrind_pov_73 CableGrind_pov_62 CableGrind_pov_5 CableGrind_pov_49 CableGrind_pov_83 CableGrind_pov_48 CableGrind_pov_67 CableGrind_pov_55 CableGrind_pov_46 CableGrind_pov_99 CableGrind_pov_43 CableGrind_pov_54 CableGrind_pov_42 CableGrind_pov_41 CableGrind_pov_39 CableGrind_pov_38 CableGrind_pov_37 CableGrind_pov_93 CableGrind_pov_35 CableGrind_pov_88 CableGrind_pov_33 CableGrind_pov_32 CableGrind_pov_31 CableGrind_pov_68 CableGrind_pov_30 CableGrind_pov_3 CableGrind_pov_34 CableGrind_pov_29 CableGrind_pov_28 CableGrind_pov_72 CableGrind_pov_27 CableGrind_pov_25 CableGrind_pov_23 CableGrind_pov_22 CableGrind_pov_20 CableGrind_pov_57 CableGrind_pov_4 CableGrind_pov_135 CableGrind_pov_78 CableGrind_pov_16 CableGrind_pov_107 CableGrind_pov_173 CableGrind_pov_132 CableGrind_pov_45 CableGrind_pov_108 CableGrind_pov_157 CableGrind_pov_122 CableGrind_pov_131 CableGrind_pov_101 CableGrind_pov_121 CableGrind_pov_128 CableGrind_pov_117 CableGrind_pov_164 CableGrind_pov_112 CableGrind_pov_120 CableGrind_pov_102 CableGrind_pov_110 CableGrind_pov_77 CableGrind_pov_147 CableGrind_pov_15 CableGrind_pov_141 CableGrind_pov_70 CableGrind_pov_50 CableGrind_pov_148 CableGrind_pov_92 CableGrind_pov_163 CableGrind_pov_118 CableGrind_pov_125 CableGrind_pov_96 CableGrind_pov_65 CableGrind_pov_58 CableGrind_pov_160 CableGrind_pov_14 CableGrind_pov_175 CableGrind_pov_85 CableGrind_pov_181 CableGrind_pov_8 CableGrind_pov_44 CableGrind_pov_109 CableGrind CableGrind_pov_127 CableGrind_pov_144 CableGrind_pov_119 CableGrind_pov_19 CableGrind_pov_36 CableGrind_pov_129 CableGrind_pov_133 CableGrind_pov_154 CableGrind_pov_123 CableGrind_pov_138 CableGrind_patched CableGrind_pov_105 CableGrind_pov_104 CableGrind_pov_17 CableGrind_pov_134 CableGrind_pov_100 CableGrind_pov_155 CableGrind_pov_106 CableGrind_pov_40 CableGrind_pov_137 CableGrind_pov_24 CableGrind_pov_169 CableGrind_pov_111 CableGrind_pov_172 CableGrind_pov_103 CableGrind_pov_124 CableGrind_pov_136 CableGrind_pov_12 CableGrind_pov_126 CableGrind_pov_140 CableGrind_pov_130 CableGrind_pov_1 CableGrind_pov_150 CableGrind_pov_114 CableGrind_pov_176 CableGrind_pov_82 CableGrind_pov_47 CableGrind_pov_113 CableGrind_pov_139 CableGrind_pov_142 CableGrind_pov_143 CableGrind_pov_7 CableGrind_pov_116 CableGrind_pov_146 CableGrind_pov_159 CableGrind_pov_149 CableGrind_pov_145 CableGrind_pov_18 CableGrind_pov_151 CableGrind_pov_152 CableGrind_pov_94 CableGrind_pov_162 CableGrind_pov_156 CableGrind_pov_158 CableGrind_pov_21 CableGrind_pov_161 CableGrind_pov_13 CableGrind_pov_165 CableGrind_pov_166 CableGrind_pov_167 CableGrind_pov_153 CableGrind_pov_168 CableGrind_pov_170 CableGrind_pov_11 CableGrind_pov_115 CableGrind_pov_171 CableGrind_pov_178 CableGrind_pov_174 CableGrind_pov_26 CableGrind_pov_177 CableGrind_pov_179 CableGrind_pov_10 CableGrind_pov_180 CableGrind_pov_2
