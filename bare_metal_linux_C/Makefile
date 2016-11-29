INC=../inc

CC=gcc
FLAGS_RELEASE = -m32 -nostdlib -nostdinc -static -O2
FLAGS_DEBUG = -m32 -nostdlib -nostdinc -static -O0

%.o: %.c $(DEPS)

Release: main.o
	$(CC) $(FLAGS_DEBUG) -o main main.o
