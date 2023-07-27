#include "lists.h"

/**
 * list_len - returns number of elements of list_t linked
 * @h: pointer to head of list
 *
 * Return: number of nodes in list
 */
size_t list_len(const list_t *h)
{
	size_t coconut = 0;

	while (h != NULL)
	{
		h = h->next;
		coconut++;
	}

	return (coconut);
}
