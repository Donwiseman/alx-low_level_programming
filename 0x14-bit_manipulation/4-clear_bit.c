#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to integer whose bit is to be set
 * @index: position to set bit
 *
 * Return: returns 1 if succesful or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, temp;

	if (n == NULL || index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	mask = 1 << index;
	temp = *n | mask;
	*n = temp ^ mask;
	return (1);
}
