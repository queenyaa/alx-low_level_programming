#include "lists.h"

/**
 * sum_dlistint - prints the summ of all data of list
 * @head: pointer to head of the doubly linked list
 * Return: sum of all data (n) in list, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
