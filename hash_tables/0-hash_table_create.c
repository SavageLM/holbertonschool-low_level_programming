#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of array
 * Return: Pointer to table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newhash;

	newhash = malloc(sizeof(hash_table_t));
	if (newhash == NULL)
		return (NULL);

	newhash->size = size;
	newhash->array = calloc(size, sizeof(hash_node_t *));
	if ((newhash->array) == NULL)
	{
		free(newhash);
		return (NULL);
	}
	return (newhash);
}
