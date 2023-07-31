#include "lists.h"

/**
 * pop_listint - function to delete head node
 * @head: pointer to address of head node
 * Return: data (n) stored in deleted head node, 0 if otherwise
 */

int pop_listint(listint_t **head)
{
	int intake = 0;
	listint_t *tmpo; /*to store address of head node*/

	if (head == NULL || *head == NULL)
		return (0);

	tmpo = *head;
	intake = tmpo->n;
	*head = tmpo->next; /*updated to point tonext node*/
	free(tmpo);

	return (intake); /*returns intake stored in deleted head node*/
}
