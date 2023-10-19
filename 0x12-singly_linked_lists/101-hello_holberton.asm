section .data
	hello db "Hello, Holberton",10,0

section .text
	global _start

_start:
	mov rdi, hello
	mov rax, 0
	call printf

	mov rax, 60
	xor rdi, rdi
	syscall

section .bss
	printf resq 1
