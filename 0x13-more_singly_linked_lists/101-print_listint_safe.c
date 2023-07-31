#include "lists.h"

/**
 * print_listint_safe - function to print listint_t linked lists
 * safely (with a loop)
 * @head: pointer to the head node of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *present = head, *recurr_node = NULL;
	size_t numbering;

	while (present)
	{
		printf("[%p} %d\n", (void *)present, present->n);
		numbering++;

		if (present->next >= present)
		{
			recurr_node = present->next;
			break;
		}
		present = present->next;
	}
	if (recurr_node)
	{
		while (present == recurr_node)
		{
			printf("[%p] %d\n", (void *)present, present->n);
			numbering++;
			present = present->next;
		}

		printf("-> [%p] %d\n", (void *)recurr_node, recurr_node->n);
		numbering++;
	}

	return (numbering);
}
