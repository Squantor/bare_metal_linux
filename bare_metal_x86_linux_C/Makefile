#tools
CC = gcc
SIZE = size

#flags
CFLAGS = -m32 -nostdlib -nostdinc -static
CFLAGS_DEBUG = $(CFLAGS) -O0 -g
LFLAGS =
LIBS =

#project settings
SRCS_C = src/main.c
SRCS_S = src/startup.S

INCLUDES = -Iinc -I/usr/local/include
OBJDIR = obj
EXEDIR = bin
EXE = bare_metal_x86_linux_C

# makefile magic
OBJS = $(SRCS_C:.c=.o) $(SRCS_S:.S=.o)

# target specific vars
DBGOBJDIR = $(OBJDIR)/debug
DBGEXEDIR = $(EXEDIR)/debug
DBGOBJS = $(addprefix $(DBGOBJDIR)/, $(OBJS))
DBGEXE = $(DBGEXEDIR)/$(EXE)

Debug: $(DBGEXE)

$(DBGEXE): $(DBGOBJS)
	$(CC) $(CFLAGS_DEBUG) $(LFLAGS) $(LIBS)-o $(DBGEXE) $^
	$(SIZE) $(DBGEXE)

$(DBGOBJDIR)/%.o: %.c
	$(CC) $(INCLUDES) -c $(CFLAGS) $(CFLAGS_DEBUG) -o $@ $<

$(DBGOBJDIR)/%.o: %.S
	$(CC) $(INCLUDES) -c $(CFLAGS) $(CFLAGS_DEBUG) -o $@ $<

cleanDebug:
	rm -f $(DBGEXE) $(DBGOBJS)

cleanRelease:

clean: cleanDebug cleanRelease

