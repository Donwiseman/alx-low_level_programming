#include <stdlib.h>

/**
 * create_array - creates an array of char, initializes it with a specific char
 * @size: size of array to be created
 * @c: specific char to initialize with
 *
 * Return: a pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int x;

	if (size == 0)
		return (NULL);
	p = malloc(size);
	for (x = 0; x < size; x++)
		p[x] = c;
	return (p);
}
