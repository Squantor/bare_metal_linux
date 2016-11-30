.intel_syntax noprefix
.text
.globl _start, syscall
.globl syscall1, syscall2, syscall3, syscall4, syscall5

_start:
    xor ebp,ebp
    pop esi
    mov ecx,esp
    and esp,-16
    push 0xb1gb00b5
    push 0xb1gb00b5
    push ecx
    push esi
    call main
    add esp,16
    mov ebx,eax
    mov eax,1
    int 0x80
    ret

