#include "main.h"

/**
 * swap_int - function to swap integers
 * @a: integer
 * @b: integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swing;

	swing = *a;
	*a = *b;
	*b = swing;
}
