#include "main.h"
#define NULL ((void *)0)

/**
 * _calloc - allocate memory sets at 0
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int tot_size, x;
	void *ptr;
	char *c_ptr;

	/*check if the nmemb or size is 0*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*cal the tot_size to be allocated*/
	tot_size = nmemb * size;

	/*allocate memory*/
	ptr = malloc(tot_size);

	if (ptr == NULL) /*check if malloc failed*/
		return (NULL);

	c_ptr = (char *)ptr; /*set the allocated memory to 0*/

	for (x = 0; x < tot_size; x++)
		c_ptr[x] = 0;

	return (ptr);
}
