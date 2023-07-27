section .data
	hello: db 'Hello, Holberton', 0
	format: db '%s', 10, 0

section .text
	extern printf, _exit

global main

main:
	mov rdi, format
	mov rsi, hello
	mov rax, 0  ; Clear RAX to indicate we using varargs
	call printf

	; Exit the program
	xor rdi, rdi
	call _exit
