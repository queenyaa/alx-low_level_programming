#include "lists.h"

/**
 * sum_listint - function to return sum of all data of list
 * @head: pointer to head node
 * Return: sum of all the data, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int adding = 0;
	listint_t *present = head;

	while (present != NULL) /*iterate through list*/
	{
		adding += present->n;/*add n to present node while at it*/
		present = present->next; /*present is updated*/
	}
	/*loop until present becomes NULL*/
	return (adding);
}
