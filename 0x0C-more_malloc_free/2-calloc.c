#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc and initializes to 0
 * @nmemb: number of members in array
 * @size:number of bytes of an element
 *
 * Return: a void pointer to the allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc(nmemb * size);
	if (p == NULL || size == 0 || nmemb == 0)
		return (NULL);
	return (p);
}
