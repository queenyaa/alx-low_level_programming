section .data
	hello: db 'Hello, Holberton', 0
	format: db '%s', 10, 0

section .text
	extern printf

global main

main:

	push	rbp

	mov	rdi,format
	mov	rsi,hello
	mov	rax,0		; Clear RAX to indicate we using varargs
	call	printf

	pop	rbp

	mov	rax,0
	ret
