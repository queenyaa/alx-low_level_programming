#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of list
 * @head: pointer to pointer of the head of doubly linked list
 * @n: integer to be stored in the new node
 * Return: address of the new element, NULL if otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node;
	dlistint_t *curr;

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		n_node->prev = NULL;
		*head = n_node;
		return (n_node);
	}
	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;

	curr->next = n_node;
	n_node->prev = curr;

	return (n_node);
}
