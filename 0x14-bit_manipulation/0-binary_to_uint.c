#include "main.h"
#include <stdlib.h>

/**
 * two_power - returns the value of 2 exponents
 * @power: power to be raised to
 *
 * Return: returnsthe value of the exponent
 */
unsigned int two_power(unsigned int power)
{
	unsigned int x, exp = 1;

	if (power == 0)
		return (1);
	for (x = 0; x < power; x++)
		exp *= 2;
	return (exp);
}

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: binary number as a string
 *
 * Return: returns the number in decimal or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0, len = 0, index, power, num;

	if (b == NULL)
		return (0);
	while (*(b + len))
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(b + index) == '1')
			num = 1;
		else if (*(b + index) == '0')
			num = 0;
		else
			return (0);
		power = len - index - 1;
		deci += num * two_power(power);
	}
	return (deci);
}
