#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/*struct for listsint_t*/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/*prints all elements*/
size_t print_listint(const listint_t *h);

/*returns number of elements*/
size_t listint_len(const listint_t *h);

/*adds a new node to the beginning*/
listint_t *add_nodeint(listint_t **head, const int n);

/*frees list*/
void free_listint(listint_t *head);

/* adds a new node to the end*/
listint_t *add_nodeint_end(listint_t **head, const int n);

/*frees list and sets nead to NULL*/
void free_listint2(listint_t **head);

/* deletes head node of list and returns its data*/
int pop_listint(listint_t **head);

/* returns nth node of linked list*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/*returnes sum of all data (n) of linked list*/
int sum_listint(listint_t *head);

/* inserts new node at a given position in a list*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/*deletes the node at index index of linked list*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/*recerses a linked list*/
listint_t *reverse_listint(listint_t **head);

/*prints a linked list safely (with a loop)*/
size_t print_listint_safe(const listint_t *head);

/*free a list safely (even with a loop)*/
size_t free_listint_safe(listint_t **h);

/*finds the loop in a linked list */
listint_t *find_listint_loop(listint_t *head);

#endif /* LISTS_H */
