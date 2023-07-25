#include "hash_tables.h"

/**
 * hash_table_get - Retrieves value associated with a key
 * @ht: hash table to check
 * @key: key to find
 * Return: value or NULL on fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ki;
	hash_node_t *node_check;

	if (ht == NULL || key == NULL)
		return (NULL);

	ki = key_index((unsigned char *) key, ht->size);
	node_check = ht->array[ki];
	if (node_check == NULL)
		return (NULL);

	while (strcmp(key, node_check->key) != 0)
		node_check = node_check->next;

	return (node_check->value);
}
