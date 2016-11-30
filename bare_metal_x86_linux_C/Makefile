#tools
CC=gcc

#flags
CFLAGS_RELEASE = -m32 -nostdlib -nostdinc -static -O2
CFLAGS_DEBUG = -m32 -nostdlib -nostdinc -static -O0
LFLAGS =
LIBS =

#project settings
SOURCES = main.c
INCLUDES = -I./inc
MAIN = bare_metal_x86_linux_C

OBJECTS = $(SOURCES:.c=.o)

Release: $(OBJECTS)
	$(CC) $(FLAGS_RELEASE) $(INCLUDES) -o $(MAIN) $(OBJECTS) $(LFLAGS) $(LIBS)

Debug: $(OBJECTS)
	$(CC) $(CFLAGS_DEBUG) $(INCLUDES) -o $(MAIN) $(OBJECTS) $(LFLAGS) $(LIBS)

cleanDebug:

cleanRelease:

