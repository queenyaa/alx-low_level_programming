#include "lists.h"

/**
 * add_nodeint_end - function to add new node at the end of list
 * @head: pointer to address of head node
 * @n: integer stored in new node
 * Return: address of new element, NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/**
	 * new node created dynamically using malloc to allocate memory
	 * for listint_t structure
	 */
	listint_t *new_coconut = malloc(sizeof(listint_t));
	listint_t *tmpo = *head;

	if (new_coconut == NULL) /*if operation fails, return NULL*/
		return (NULL);

	new_coconut->n = n;
	new_coconut->next = NULL;

	if (*head == NULL)
	{
		*head = new_coconut;
	}
	else /*if list is not empty*/
	{
		while (tmpo->next != NULL)
		{
			tmpo = tmpo->next;
		}
		tmpo->next = new_coconut;
	}
	return (new_coconut);
}
