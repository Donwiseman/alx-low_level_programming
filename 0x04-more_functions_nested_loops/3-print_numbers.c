#include "main.h"

/**
 * print_numbers - prints all single digit of decimal numbers
 *
 * Return: returns 0 if function runs with no errors
 */
void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(48 + n);
		n++;
	}
	_putchar('\n');
}
