#include "lists.h"

/**
 * print_listint - Function that prints elements of list
 * @h: pointer to head node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int node_numbering = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		node_numbering++;
		h = h->next;
		printf("\n");
	}

	return (node_numbering++);
}
