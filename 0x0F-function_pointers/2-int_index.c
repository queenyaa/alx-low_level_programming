#include "function_pointers.h"

/**
 * int_index - search for int in array thru function pointer
 * @array: the array
 * @size: size of array
 * @cmp: pointer to searching function
 * Return: index of int, -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (r = 0; r < size; r++)
	{
		if ((*cmp)(array[r]) != 0)
			return (r);
	}

	return (-1);
}
