#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory block to be reallocated
 * @old_size: size of old memoru block
 * @new_size: size of the new memory block to be allocated
 *
 * Return: returns a pointer to the new reallocated memory or NULL otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int len;
	unsigned int x;
	char *o = (char *)ptr;
	char *p;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
		p = malloc(new_size);
	if (ptr == NULL)
		return ((void *) p);
	if (old_size == new_size)
	{
		free(p);
		return (ptr);
	}
	else if (old_size < new_size)
		len = old_size;
	else
		len = new_size;
	for (x = 0; x < len; x++)
	{
		p[x] = o[x];
	}
	return ((void *) p);
}
