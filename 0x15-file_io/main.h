#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <elf.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/* Task 0: Read and print text file */
ssize_t read_textfile(const char *filename, size_t letters);

/*Task 1: creat a file*/
int create_file(const char *filename, char *text_content);

/*Task 2: Append text to a file */
int append_text_to_file(const char *filename, char *text_content);

/*Task 3: copy the content of a file to another file*/
int main(int argc, char *argv[]);

/*Task 4: display ELF header information*/
int elf_header_main(int argc, char *argv[]);

#endif /* MAIN_H*/
