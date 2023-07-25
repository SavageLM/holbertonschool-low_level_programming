#include "hash_tables.h"

/**
 * hash_table_set - adds element tp a hash table
 * @ht: hash table to add or update key/value to
 * @value: value to be added or updated
 * Return: 1 on success, 0 on fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *val_dupe;
	unsigned long int ki, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_dupe = strdup(value);
	if (val_dupe == NULL)
		return (0);

	ki = key_index((const unsigned char *) key, ht->size);
	for (i = ki; ht->array[i]; i++)
	{
		if( strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val_dupe;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = val_dupe;
	new_node->next = ht->array[ki];
	ht->array[ki] = new_node;

	return (1);
}
