#include "hash_tables.h"

/**
 * shash_table_create - creates sorted hash table
 * @size: sixe of hash table
 * Return: Pointer to the new sorted hash table
 * NULL otherwise
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		ht->array[x] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - add element to table
 * @ht: pointer to the table
 * @key: key
 * @value: value of key
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *nw, *tmpo;
	char *n_val;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	n_val = strdup(value);
	if (n_val == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmpo = ht->shead;
	while (tmpo)
	{
		if (strcmp(tmpo->key, key) == 0)
		{
			free(tmpo->value);
			tmpo->value = n_val;
			return (1);
		}
		tmpo = tmpo->snext;
	}
	nw = malloc(sizeof(shash_node_t));
	if (nw == NULL)
	{
		free(n_val);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{
		free(n_val);
		free(nw);
		return (0);
	}
	nw->value = n_val;
	nw->next = ht->array[index];
	ht->array[index] = nw;

	if (ht->shead == NULL)
	{
		nw->sprev = NULL;
		nw->snext = NULL;
		ht->shead = nw;
		ht->stail = nw;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		nw->sprev = NULL;
		nw->snext = ht->shead;
		ht->shead->sprev = nw;
		ht->shead = nw;
	}
	else
	{
		tmpo = ht->shead;
		while (tmpo->snext != NULL && strcmp(tmpo->snext->key, key))
			tmpo = tmpo->snext;
		nw->sprev = tmpo;
		nw->snext = tmpo->snext;
		if (tmpo->snext == NULL)
			ht->stail = nw;
		else
			tmpo->snext->sprev = nw;
		tmpo->snext = nw;
	}
	return (1);
}

/**
 * shash_table_get - Retrieve value of key in table
 * @ht: pointer to the table
 * @key: key to get the value of
 * Return: Value of the key in ht, NULL if otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - prints a sorted hash table in order
 * @ht: pointer to table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print in reverse
 * @ht: pointer to sorted table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted table
 * @ht: pointer to sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmpo;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node)
	{
		tmpo = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmpo;
	}
	free(head->array);
	free(head);
}
