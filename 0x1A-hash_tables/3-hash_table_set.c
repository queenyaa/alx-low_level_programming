#include "hash_tables.h"

/**
 * create_node - Creates a new hash node
 * @key: the key
 * @value: the value associated with the key
 * Return: A pointer to the new node or NULL if otherwise
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *n_node;

	n_node = malloc(sizeof(hash_node_t));
	if (n_node == NULL)
		return (NULL);

	n_node->key = strdup(key);
	if (n_node->key == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->value = strdup(value);
	if (n_node->value == NULL)
	{
		free(n_node->key);
		free(n_node);
		return (NULL);
	}
	n_node->next = NULL;
	return (n_node);
}

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 * (must be duplicated)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *n_node, *curr;
	char *n_value = strdup(value);

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Calculate the index using key_index function */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exits in linked list at index */
	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			/* Update the value with the new value */
			if (n_value == NULL)
				return (0);
			free(curr->value);
			curr->value = n_value;
			return (1);
		}
		curr = curr->next;
	}
	n_node = create_node(key, value);
	if (n_node == NULL)
		return (0);
	n_node->next = ht->array[index];
	ht->array[index] = n_node;

	return (1);
}
