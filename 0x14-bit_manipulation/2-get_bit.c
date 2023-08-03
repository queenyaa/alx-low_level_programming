#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: num from which to get the bit value
 * @index: index of the bit to be retrieved from 0
 *
 * Return: value of the bit at the given index, -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int turn;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	turn = 1UL << index; /*creates a mask with a single bit, given index*/
	return ((n & turn) ? 1 : 0);
}
