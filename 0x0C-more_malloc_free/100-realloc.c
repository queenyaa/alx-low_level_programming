#include "main.h"
#define NULL ((void *)0)

/**
 * _realloc - reallocate a memory block
 * @ptr: pointer
 * @old_size: initial memory
 * @new_size: final memory
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *n_ptr;
	unsigned int m_sz, x;
	char *c_ptr, *nc_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);

	/*allocate new memory block*/
	n_ptr = malloc(new_size);
	if (n_ptr == NULL)
		return (NULL);

	/*Copy contents to the new memory block*/
	m_sz = (old_size < new_size) ? old_size : new_size;
	c_ptr = (char *)ptr;
	nc_ptr = (char *)n_ptr;

	for (x = 0; x < m_sz; x++)
		nc_ptr[x] = c_ptr[x];

	free(ptr);

	return (n_ptr);
}
