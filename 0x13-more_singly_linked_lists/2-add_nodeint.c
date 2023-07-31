#include "lists.h"

/**
 * add_nodeint - function that adds a new node to the beginning
 * @head: pointer to address of the head node
 * @n: integer stored in the new node
 * Return: address of new element (new head node), NULL if otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_coconut = malloc(sizeof(listint_t));

	if (new_coconut == NULL)
		return (NULL);

	new_coconut->n = n;
	new_coconut->next = *head;
	*head = new_coconut;

	return (new_coconut);
}
