#include <syscalls.h>

int write(int fd, const void *buf, int count)
{
    return syscall3(4, fd, (long)buf, count);
}

void exit(int status)
{
    syscall1(1, status);
}

void _start()
{
    int retval;
    retval = write(1,"Hello world\n",12);
    exit(0);
}
