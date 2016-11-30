#include <syscalls.h>

int write(int fd, const void *buf, int count)
{
    return syscall3(4, fd, (long)buf, count);
}

int main(int argc, char const* argv[])
{
    int retval;
    retval = write(1,"Hello world\n",12);
    return retval;
}
