global	main

section .data
holberton:db	"Hello, Holberton", 10

section	.text
main:	mov	rax, 1
mov	rdi, 1
mov	rsi, holberton
mov	rdx, 17
syscall
mov	rax, 60
xor	rdi, rdi
syscall
