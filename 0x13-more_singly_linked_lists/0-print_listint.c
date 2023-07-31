#include "lists.h"

/**
 * print_listint - Function that prints elements of list
 * @h: pointer to head node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_numbering = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_numbering++;
	}

	return (node_numbering++);
}
