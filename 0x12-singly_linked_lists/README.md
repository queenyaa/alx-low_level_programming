Assembly Programming - Hello, AlxSE
This repository contains a 64-bit assembly program that prints "Hello, AlxSE," followed by a new line. The program is written in NASM assembly and uses the printf function from the C standard library.

Requirements
To compile and run the program, you need the following tools:
	• GCC (GNU Compiler Collection)
	• NASM (Netwide Assembler)
	
Program Description
The assembly code in hello.asm is designed to print the message "Hello, AlxSE" followed by a new line using the printf function. It follows the provided guidelines and targets the 64-bit architecture.

Code Explanation
The assembly code in hello.asm accomplishes the following:
	1. Declares the necessary data and format strings in the .data section.
	2. Uses the printf function to print the message "Hello, AlxSE" and a new line.
	3. Calls the exit function to exit the program gracefully.

How to Compile and Run
To compile and run the program, use the following commands in the terminal:

bash

nasm -f elf64 hello.asm
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <testfile.c> <programfile.c -o <outputExefile>

./<outputExefile>

Output
When you run the hello program, it will print the message "Hello, Holberton" followed by a new line.

Requirements and Restrictions
The program adheres to the specified requirements and restrictions, including using only the printf function and not using interrupts.

Author
This program was written by @queenyaa.

