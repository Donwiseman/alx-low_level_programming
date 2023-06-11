#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table in which element is to be added
 * @key: key to be used for indexing
 * @value: value attached to key
 *
 * Return: 1 on success, zero on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	char *key_cpy, *value_cpy;

	if ((ht == NULL) || (key == NULL) || (strcmp(key, "") == 0))
		return (0);
	node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	key_cpy = (char *) malloc((strlen(key) + 1) * sizeof(char));
	if (key_cpy == NULL)
		return (0);
	strcpy(key_cpy, key);
	value_cpy = (char *) malloc((strlen(value) + 1) * sizeof(char));
	if (value_cpy == NULL)
	{
		free(key_cpy);
		return (0);
	}
	strcpy(value_cpy, value);
	node->key = key_cpy;
	node->value = value_cpy;
	node->next = NULL;
	index = key_index((unsigned char *)node->key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
