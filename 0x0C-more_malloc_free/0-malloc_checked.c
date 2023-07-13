#include "main.h"
#define NULL ((void *)0)

/**
 * malloc_checked - allocates memory
 * @b: unsigned integer size of memory allocated
 * Return: a pointer (success), else a status of value 98
 */

void *malloc_checked(unsigned int b)
{
	void *point = malloc(b);

	if (point == NULL)
	{
		exit(98);
	}
	return (point);
}
