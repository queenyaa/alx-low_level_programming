#include "lists.h"

/**
 * free_listint_safe - function that frees a list safely
 * (even with a loop)
 * @h: pointer to address of head node
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *present = *h, *next;
	size_t numbering = 0;

	while (present != NULL)
	{
		next = present->next;
		free(present);
		numbering++;

		/*detect if there is a loop*/
		if (next != NULL && next >= present)
		{
			*h = NULL;
			return (numbering);
		}
		present = next;
	}
	*h = NULL;
	return (numbering);
}
