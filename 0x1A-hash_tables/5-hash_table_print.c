#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table.
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned int x, first = 1;

	if (ht == NULL)
		return;
	for (x = 0; x < ht->size; x++)
	{
		if (x == 0)
			printf("{");
		head = ht->array[x];
		while (head)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			first = 0;
			head = head->next;
		}
		if (x == (ht->size - 1))
			printf("}\n");
	}
}
