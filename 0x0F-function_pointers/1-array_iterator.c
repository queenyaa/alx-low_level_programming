#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute function on an array thru function ptr
 * @array: the array
 * @size: size of array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t r;

	if (array == NULL || action == NULL)
		return;

	for (r = 0; r < size; r++)
	{
		(*action)(array[r]);
	}
}
