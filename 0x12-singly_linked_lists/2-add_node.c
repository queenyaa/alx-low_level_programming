#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: pointer to pointer to head
 * @str: string to be dup and added
 *
 * Return: address of the new element, NULL if otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *aluguntugui;

	if (str == NULL)
		return (NULL);

	aluguntugui = malloc(sizeof(list_t));
	if (aluguntugui == NULL)
		return (NULL);

	aluguntugui->str = strdup(str);
	if (aluguntugui == NULL)
	{
		free(aluguntugui);
		return (NULL);
	}

	aluguntugui->len = strlen(str);
	aluguntugui->next = *head;
	*head = aluguntugui;

	return (aluguntugui);
}
