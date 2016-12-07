/*
*/
#ifndef SYSCALLS_H
#define SYSCALLS_H

static inline long syscall1(long syscall, long arg1)
{
    long ret;
    asm volatile ("syscall":"=a"(ret):"a"(syscall),"D"(arg1):"memory");
    return ret;
}

static inline long syscall3(long syscall, long arg1, long arg2, long arg3)
{
    long ret;
    asm volatile ("syscall" : "=a" (ret) : "a" (syscall), "D" (arg1), "S" (arg2),"d" (arg3) : "memory");
    return ret;
}

#endif // SYSCALLS_H
