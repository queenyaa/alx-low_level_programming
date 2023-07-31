#include "lists.h"

/**
 * free_listint - function to free a list
 * @head: pointer to the head node
 */

void free_listint(listint_t *head)
{
	listint_t *tmpo;

	while (head != NULL)
	{
		tmpo = head;
		head = head->next;
		free(tmpo);
	}
}
