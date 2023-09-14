#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node of a given index
 * @head: pointer to pointer of head of doubly linked list
 * @index: indes of the node to be deleted
 * Return: 1 if success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int x = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}

	while (curr != NULL)
	{
		if (x == index)
		{
			if (curr->next != NULL)
				curr->next->prev = curr->prev;
			if (curr->prev != NULL)
				curr->prev->next = curr->next;
			free(curr);
			return (1);
		}
		curr = curr->next;
		x++;
	}
	return (-1);
}
