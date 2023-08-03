#include "main.h"

/**
 * clear_bit - sets value of bit to 0, given index
 * @n: pointer to num where bit will be cleared
 * @index: index of bit to be cleared, from 0
 * Return: 1 on success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/*if index is out of range, return -1*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index); /*clears bit at index to 0 using AND*/
	return (1);
}
