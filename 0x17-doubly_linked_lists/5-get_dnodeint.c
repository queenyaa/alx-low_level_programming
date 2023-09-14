#include "lists.h"

/**
 * get_dnodeint_at_index - prints the nth node of a list
 * @head: pointer to the head of the doubly linked list
 * @index: index of the node to retrieve (starting from 0)
 * Return: pointer to the nth node, NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; head != NULL && x < index; x++)
		head = head->next;

	return (head);
}
