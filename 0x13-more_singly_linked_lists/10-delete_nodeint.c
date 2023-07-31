#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes node at any given
 * index in list
 * @head: pointer to address of head node
 * @index: index of node to be deleted from 0
 * Return: 1 if deleted, -1 if otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmpo, *before;
	unsigned int numbering = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	tmpo = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmpo);
		return (1);
	}

	while (tmpo != NULL && numbering < index)
	{
		before = tmpo;
		tmpo = tmpo->next;
		numbering++;
	}
	if (tmpo == NULL)
		return (-1);

	before->next = tmpo->next;
	free(tmpo);

	return (1);
}
