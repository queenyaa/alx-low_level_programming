#include "lists.h"

/**
 * get_nodeint_at_index - function to return the nth node of list
 * @head: pointer to head node
 * @index: index of node to retrieve (beginning from 0)
 * Return: nth node of list, NULL if otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *present = head; /*to traverse the list*/
	unsigned int numbering = 0;

	while (present != NULL)
	{
		if (numbering == index)/*check if present node's index matches*/
			return (present);

		numbering++;
		present = present->next;
	}
	/*if index is out of range*/
	return (NULL);
}
