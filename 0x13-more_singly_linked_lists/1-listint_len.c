#include "lists.h"

/**
 * listint_len - function to return no of elements
 * @h: pointer to head node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node_numbering = 0;

	while (h != NULL)
	{
		h = h->next;
		node_numbering++;
	}

	return (node_numbering);
}
