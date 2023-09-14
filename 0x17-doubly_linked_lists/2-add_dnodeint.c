#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the start
 * @head: pointer to pointer to the head of the doubly linked list
 * @n: integer to be stored in the new node
 * Return: address of the new element, NULL if otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;

	if (*head != NULL)
		(*head)->prev = n_node;

	*head = n_node;

	return (n_node);
}
