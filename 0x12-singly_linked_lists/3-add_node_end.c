#include "lists.h"

/**
 * add_node_end - add new node to end of list_t
 * @str: string to be dup and added to new node
 * @head: pointer to pointer to end of list
 *
 * Return: address of new  element, NULL if otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *grapes, *tempo;

	if (str == NULL)
		return (NULL);

	grapes = malloc(sizeof(list_t));
	if (grapes == NULL)
		return (NULL);

	grapes->str = strdup(str);
	if (grapes->str == NULL)
	{
		free(grapes);
		return (NULL);
	}

	grapes->len = strlen(str);
	grapes->next = NULL;

	if (*head == NULL)
		*head = grapes;

	else
	{
		tempo = *head;
		while (tempo->next != NULL)
			tempo = tempo->next;
		tempo->next = grapes;
	}
	return (grapes);
}
