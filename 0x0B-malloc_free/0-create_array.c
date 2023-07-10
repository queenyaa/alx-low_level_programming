#include "main.h"
#include <stdlib.h>
#define NULL ((void *)0)

/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char ot assign
 * Description: array of size and assign c
 * Return: pointer to size, NULL if otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));
	if (size == 0 || arr == NULL)
	{
		return (NULL); /*failed memory allocation*/
	}

	/*initialize arr to specified char*/
	for (a = 0; a < size; a++)
	{
		arr[a] = c;
	}
	return (arr);
}
