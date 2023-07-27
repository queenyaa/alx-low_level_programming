#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *guava;

	while (head != NULL)
	{
		guava = head;
		head = head->next;
		free(guava->str);
		free(guava);
	}
}
