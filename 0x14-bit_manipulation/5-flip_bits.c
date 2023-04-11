#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first value
 * @m: second value to compare with
 *
 * Return: returns number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int flip_count = 0;

	flip = n ^ m;
	if (flip == 0)
		return (0);
	while (flip != 0)
	{
		if ((flip & 1) == 1)
			flip_count++;
		flip = flip >> 1;
	}
	return (flip_count);
}
