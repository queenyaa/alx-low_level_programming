#include "lists.h"

/**
 * print_list - prints elements of ist_t
 * @h: pointer to head of list
 * Return: number of node in list
 */
size_t print_list(const list_t *h)
{
	size_t coconut = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		coconut++;
	}

	return (coconut);
}
