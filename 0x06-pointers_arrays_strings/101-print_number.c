#include "main.h"
#include <stdlib.h>

/**
 * print_number - prints an integer to the stdout
 * @n: integer to be printed
 */
void print_number(int n)
{
	int lastn;

	/*check if negative*/
	if (n < 0)
	{
		_putchar('-');
	}
	/*get last digit and remainder as absolute value*/
	lastn = abs(n % 10);
	n = abs(n / 10);
	/*use recursion if remainder value is not zero*/
	if (n != 0)
	{
		print_number(n);
	}
	_putchar(48 + lastn);
}
