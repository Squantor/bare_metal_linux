#tools
CC = gcc

#flags
CFLAGS = -m32 -nostdlib -nostdinc -static
CFLAGS_DEBUG = $(CFLAGS) -O0
LFLAGS =
LIBS =

#project settings
SRCS = src/main.c

INCLUDES = -I./inc
OBJDIR = obj
EXEDIR = bin
EXE = bare_metal_x86_linux_C

# makefile magic
OBJS = $(SRCS:.c=.o)

# target specific vars
DBGOBJDIR = $(OBJDIR)/debug
DBGEXEDIR = $(EXEDIR)/debug
DBGOBJS = $(addprefix $(DBGOBJDIR)/, $(OBJS))
DBGEXE = $(DBGEXEDIR)/$(EXE)

Debug: $(DBGEXE)

$(DBGEXE): $(DBGOBJS)
	$(CC) $(CFLAGS_DEBUG) $(INCLUDES) $(LFLAGS) $(LIBS)-o $(DBGEXE) $^

$(DBGOBJDIR)/%.o: %.c
	$(CC) -c $(CFLAGS) $(CFLAGS_DEBUG) -o $@ $<

cleanDebug:
	rm -f $(DBGEXE) $(DBGOBJS)

cleanRelease:

clean: cleanDebug cleanRelease

