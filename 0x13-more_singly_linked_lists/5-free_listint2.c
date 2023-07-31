#include "lists.h"

/**
 * free_listint2 - function to free list and set head node to NULL
 * @head: pointer to address of head node of list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmpo; /*temporary pointer used to traverse the list*/

	if (head == NULL) /*check if head is NULL*/
		return;

	while (*head != NULL) /*iterates through the linked list*/
	{
		tmpo = *head;
		*head = (*head)->next; /*updates head pointer to next node*/
		free(tmpo);
	}

	*head = NULL; /*set the head to NULL after freeing*/
}
