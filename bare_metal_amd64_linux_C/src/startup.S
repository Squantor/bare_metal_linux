.intel_syntax noprefix
.text
.globl _start

_start:
    xor ebp,ebp
    pop esi
    mov ecx,esp
    and esp,-16
    push 0x0
    push 0x0
    push ecx
    push esi
    call main
    add esp,16
    mov ebx,eax
    mov eax,1
    int 0x80
    ret

