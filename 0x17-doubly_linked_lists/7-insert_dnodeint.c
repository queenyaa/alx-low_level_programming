#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to head of doubly linked list
 * @idx: index where a new node should be added
 * @n: integer to be stored in the new node
 * Return: address of new node, NULL if otherwise
 * If not possible, add the new node at index idx, do not
 * add it and return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node, *curr = *h;
	unsigned int x = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;

	while (curr != NULL)
	{
		if (x == idx - 1)
		{
			n_node->next = curr->next;
			n_node->prev = curr;
			if (curr->next != NULL)
				curr->next->prev = n_node;
			curr->next = n_node;
			return (n_node);
		}
		curr = curr->next;
		x++;
	}
	free(n_node);
	return (NULL);
}
