#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Calculate the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Compute the index by taking the modulo of hash value with size */
	return (hash_value % size);
}
