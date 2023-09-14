#include "lists.h"

/**
 * dlistint_len - prints the number of elements in a linked dlistint
 * @h: pointer to the head of the doubly linked list
 * Return: number of the elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
