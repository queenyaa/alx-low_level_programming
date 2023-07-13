#include "main.h"
#define NULL ((void *)0)

/**
 * array_range - creates an array of integers
 * @min: start array
 * @max: end array
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int sz, x, *ar;

	if (min > max)
		return (NULL);

	sz = max - min + 1;
	ar = (int *)malloc(sz * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (x = 0; x < sz; x++)
		ar[x] = min + x;

	return (ar);
}
