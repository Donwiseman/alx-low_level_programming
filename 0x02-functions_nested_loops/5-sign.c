#include "main.h"

/**
*print_sign - checks and print the sign of a number
*@n: input integer
*
* Return: 1 for +, -1 for - and 0 for zero
*/
int print_sign(int n)
{
	If(n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
