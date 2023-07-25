#include "hash_tables.h"

/**
 * hash_table_delete - does what it says
 * @ht: table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *tmp_tbl = ht;
	hash_node_t *node, *tmp_node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp_node = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp_node;
			}
		}
	}
	free(tmp_tbl->array);
	free(tmp_tbl);
}
