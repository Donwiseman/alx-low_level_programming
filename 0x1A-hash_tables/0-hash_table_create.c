#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table and sets items to NULL
 * @size: size of the hash table
 *
 * Return: pointer to the newly created hash table or NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;

	if (size == 0)
		return (NULL);
	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	array =  (hash_node_t **) calloc(size, sizeof(hash_node_t *));
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->array = array;
	return (table);
}
