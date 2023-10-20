section .data
    hello_msg db "Hello, Holberton",10,0 ; The string with a newline character

section .text
    global _start

_start:
    ; Load the address of the format string into rdi
    mov rdi, hello_msg
    ; Call printf
    call printf
    ; Exit the program
    call exit

printf:
    ; Standard printf calling conventions in 64-bit Linux:
    ; rdi = format string
    ; [rsp] = additional arguments

    ; Clear any floating-point registers to maintain FPU stack alignment
    finit

    ; Call printf
    mov rax, 1        ; printf syscall number
    mov rdi, 1        ; file descriptor 1 (stdout)
    mov rax, 60       ; syscall number for sys_write
    syscall
    ret

exit:
    ; Exit the program (syscall number 60 for sys_exit)
    mov rax, 60
    xor rdi, rdi
    syscall
