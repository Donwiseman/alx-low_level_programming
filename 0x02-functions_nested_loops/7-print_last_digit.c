#include <stdlib.h>
#include "main.h"

/**
*print_last_digit - returns and prints the last digit of a number
*@a: accepts an integer input
*
* Return: last digit of the number input
*/
int print_last_digit(int a)
{
	int ld = a % 10;
	int an = abs(ld);

	_putchar(48 + an);
	return (an);
}
