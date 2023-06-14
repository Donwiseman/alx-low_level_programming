#include "hash_tables.h"

/**
 * hash_table_delete - deletes a given hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		if (node)
		{
			while (node)
			{
				free(node->key);
				free(node->value);
				temp = node;
				node = node->next;
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
