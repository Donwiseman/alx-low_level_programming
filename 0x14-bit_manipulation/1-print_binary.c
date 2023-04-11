#include "main.h"

/**
 * print_binary - prints an integer in binary to the stdout
 * @n: integer to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned int lastn;
	unsigned long int new_n;

	new_n = n >> 1;
	lastn = n - (new_n * 2);
	if (new_n != 0)
		print_binary(new_n);
	_putchar(48 + lastn);
}
