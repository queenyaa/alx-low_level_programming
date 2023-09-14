#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the head of doubly linked list
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
