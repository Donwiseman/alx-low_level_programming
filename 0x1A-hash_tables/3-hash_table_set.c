#include "hash_tables.h"

/**
 * create_node - creates a node to store a key value pair
 * @key: key
 * @value: value
 *
 * Return: returns created node or NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;
	char *key_cpy, *value_cpy;

	node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	key_cpy = (char *) malloc((strlen(key) + 1) * sizeof(char));
	if (key_cpy == NULL)
		return (NULL);
	strcpy(key_cpy, key);
	value_cpy = (char *) malloc((strlen(value) + 1) * sizeof(char));
	if (value_cpy == NULL)
	{
		free(key_cpy);
		return (NULL);
	}
	strcpy(value_cpy, value);
	node->key = key_cpy;
	node->value = value_cpy;
	node->next = NULL;
	return (node);
}

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
	hash_node_t *new_node, *old_node;
	unsigned long int index;
	char *old_value;

	if ((ht == NULL) || (key == NULL) || (strcmp(key, "") == 0))
		return (0);
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	index = key_index((unsigned char *)new_node->key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		old_node = ht->array[index];
		while (old_node)
		{
			if (strcmp(old_node->key, new_node->key) == 0)
			{
				old_value = old_node->value;
				old_node->value = new_node->value;
				free(old_value);
				free(new_node->key);
				free(new_node);
				return (1);
			}
			old_node = old_node->next;

		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
