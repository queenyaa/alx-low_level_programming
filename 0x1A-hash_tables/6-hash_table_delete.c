#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *node, *tmpo;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node != NULL)
		{
			tmpo = node;
			node = node->next;
			free(tmpo->key);
			free(tmpo->value);
			free(tmpo);
		}
	}

	free(ht->array);
	free(ht);
}
