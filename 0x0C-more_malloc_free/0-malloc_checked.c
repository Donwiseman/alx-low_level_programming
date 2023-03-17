#include <stdlib.h>

/**
 * malloc_checked - allocates a specified block of memory
 * @b: size of memory block to allocate
 *
 * Return: returns a void pointer to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	else
		return (p);
}
