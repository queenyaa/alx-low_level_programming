#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: pointer to the newly created hash table
 * or NULL if otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_tab;
	unsigned long int x;

	/* Allocated memory for the hash table structure */
	n_tab = malloc(sizeof(hash_table_t));
	if (n_tab == NULL)
		return (NULL);

	/* Allocate memory for the array of hash_node_t pointers */
	n_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (n_tab->array == NULL)
	{
		free(n_tab);
		return (NULL);
	}

	n_tab->size = size;

	/* Initialize each element of the array to NULL */
	for (x = 0; x < size; x++)
		n_tab->array[x] = NULL;

	return (n_tab);
}
