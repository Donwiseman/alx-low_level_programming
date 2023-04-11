#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to integer whose bit is to be set
 * @index: position to set bit
 *
 * Return: returns 1 if succesful or -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL)
		return (-1);
	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
