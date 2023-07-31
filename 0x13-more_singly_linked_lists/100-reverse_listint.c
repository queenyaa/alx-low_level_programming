#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: pointer to address of the head npde
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL, *next = NULL, *present = *head;

	while (present != NULL)
	{
		next = present->next;
		present->next = before;
		before = present;
		present = next;
	}
	*head = before;
	return (*head);
}
