Singly Linked List Tasks

```
# Singly Linked List Tasks

This repository contains C functions that manipulate a singly linked list data structure named `listint_t`. The functions perform various operations on the linked list, such as printing, adding and deleting nodes, finding loops, and more. The functions are implemented based on specific requirements and restrictions provided in the project.

## Data Structure Definition

The `listint_t` data structure is defined as follows:

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## Task List

1. **Task 0**: Print all elements of a listint_t list.
  
2. **Task 1**: Return the number of elements in a listint_t list.
  
3. **Task 2**: Add a new node at the beginning of a listint_t list.
  
4. **Task 3**: Add a new node at the end of a listint_t list.
  
5. **Task 4**: Free a listint_t list.
  
6. **Task 5**: Free a listint_t list and set the head to NULL.
   
7. **Task 6**: Delete the head node of a listint_t list and return its data (n).
  
8. **Task 7**: Return the nth node of a listint_t linked list.
   
9. **Task 8**: Return the sum of all the data (n) of a listint_t linked list.
  
10. **Task 9**: Insert a new node at a given position in a listint_t list.
    
11. **Task 10**: Delete the node at index index of a listint_t linked list.
   
12. **Task 11**: Reverse a listint_t linked list.
       
13. **Task 12**: Print a listint_t linked list safely (with a loop).
  
14. **Task 13**: Free a listint_t list safely (even with a loop).

15. **Task 14**: Find the loop in a listint_t linked list.


    - Prototype: `listint_t *find_listint_loop(listint_t *head);`
    - Return: the address of the node where the loop starts, or NULL if there is no loop.
    - Allowed editors: vi, vim, emacs.
    - Compilation: Ubuntu 20.04 LTS, gcc, `-Wall -Werror -Wextra -pedantic -std=gnu89`.
    - Constraints: Not allowed to use malloc, free, or arrays. Only allowed to declare a maximum of two variables.
    - Constraints: Not allowed to use more than 1 loop, malloc, free, or arrays. Only allowed to declare a maximum of two variables.

## Compilation

All the functions have been compiled and tested on Ubuntu 20.04 LTS using `gcc` with the following flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`.

## Author

This project is authored by @queenyaa.

```
