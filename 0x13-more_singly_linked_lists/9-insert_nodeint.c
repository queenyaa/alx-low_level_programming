#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node
 * at a given position
 * @head: pointer to address of head node
 * @idx: index where the new node should be added
 * @n: integer to be stored in new node
 * Return: address of new node, NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_coconut, *tmpo;
	unsigned int numbering = 0;

	if (head == NULL)
		return (NULL);

	/*if idx is 0, add new node to the beginning*/
	if (idx == 0)
	{
		new_coconut = malloc(sizeof(listint_t));
		if (new_coconut == NULL)
			return (NULL);

		new_coconut->n = n;
		new_coconut->next = *head;
		*head = new_coconut;
		return (new_coconut);
	}

	tmpo = *head;
	while (tmpo != NULL && numbering < (idx - 1))
	{
		tmpo = tmpo->next;
		numbering++;
	}
	if (tmpo == NULL)
		return (NULL);

	new_coconut = malloc(sizeof(listint_t));
	if (new_coconut == NULL)
		return (NULL);

	new_coconut->n = n;
	new_coconut->next = tmpo->next;
	tmpo->next = new_coconut;

	return (new_coconut);
}
