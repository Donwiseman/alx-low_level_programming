#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: key to be hashed to an index
 * @size: size of the hash table
 *
 * Return: index number
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key)) % size;
	return (index);
}
