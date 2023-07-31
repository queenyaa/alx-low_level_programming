#include "lists.h"

/**
 * find_listint_loop - function to find the loop in linked list
 * @head: pointer to the head node of the list
 * Return: address of node where the loop starts, NULL otherwise
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *retard = head, *glitch = head;

	if (head == NULL || head->next == NULL)
		return (NULL);

	retard = head->next;
	glitch = head->next->next;

	/*use Floyd's Cycle Detection Algorithm*/
	while (glitch && glitch->next)
	{
		if (retard == glitch) /*loop detected*/
		{
			retard = head;
			while (retard != glitch)
			{
			/*move slow back to the head, and advance*/
			/*both slow and fast step by step*/
			/*until they meet again. The meeting point*/
			/*will be the start of the loop*/
				retard = retard->next;
				glitch = glitch->next;
			}

			return (retard);
		}
		retard = retard->next;
		glitch = glitch->next->next;
	}
	return (NULL); /*NO LOOP FOUND*/
}
