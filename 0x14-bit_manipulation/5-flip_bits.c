#include "main.h"

/**
 * flip_bits - returns num of bits needed to flip sending n to m
 * @n: 1st num
 * @m: 2nd num
 * Return: num of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int flipping = 0;

	while (xor_res)
	{
		flipping += xor_res & 1; /*counts num of 1s*/
		xor_res >>= 1;
	}
	return (flipping);
}
