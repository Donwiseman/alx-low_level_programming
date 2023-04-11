#include "main.h"

/**
 * get_endianness - checks if memory is stored as big or liitle endian
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;

	if ((n >> 8) == 0)
		return (1);
	else
		return (0);
}
