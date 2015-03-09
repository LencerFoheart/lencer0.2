#
# Small/kernel/Makefile
#
# (C) 2012-2013 Yafei Zheng
# V0.2 2013-02-01 00:44:08
#
# Email: e9999e@163.com, QQ: 1039332004
#

# --------------------------------------------
# ��������
AS		= 	as
LD		=	ld
ASEFLAGES	=
LDEFLAGES	=	-Ttext 0

CC		=	gcc
# ע�⣺console.c����ʱ�����Ż�������!!! ��ʹ�� -O
CEFLAGES		=	-Wall -O0 -std=c99 -I../include  -nostdinc -fno-builtin
# --------------------------------------------

# --------------------------------------------
all: kernel.o

OBJS  = system_call.o keyboard.o console.o

kernel.o: $(OBJS)
	$(LD) -r -o kernel.o $(OBJS)

system_call.o: system_call.s
	$(AS) $(ASEFLAGES) -o $@ $<

keyboard.o: keyboard.c ../include/keyboard.h ../include/string.h ../include/sys_set.h ../include/keymap.h
	$(CC) $(CEFLAGES) -c $<

# ע�⣺console.c����ʱ�����Ż�������!!! ��ʹ�� -O
console.o: console.c ../include/sys_set.h ../include/console.h
	$(CC) $(CEFLAGES) -c $<
# --------------------------------------------

# --------------------------------------------
# ���
.PHONY: clean
clean:
	-rm *.a *.o
# --------------------------------------------