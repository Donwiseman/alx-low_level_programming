#include "main.h"
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer whose bit is to be gotten
 * @index: position to set bit
 *
 * Return: returns 1 if succesful or -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	temp = n >> index;
	return (temp & 1);
}
