#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

/*converting binary number to unsigned int*/
unsigned int binary_to_uint(const char *b);

/*prints binary representation of a number*/
void print_binary(unsigned long int n);

/*returns value of a bit at a given index*/
int get_bit(unsigned long int n, unsigned int index);

/*sets value of a bit to 1 at a given index*/
int set_bit(unsigned long int *n, unsigned int index);

/*sets the value of a bit to 0 at a given index*/
int clear_bit(unsigned long int *n, unsigned int index);

/*returns the number of bits you need to flip numbers*/
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/*checks for endianness */
int get_endianness(void);

/*prints a character*/
int _putchar(char c);

#endif /* MAIN_H */
