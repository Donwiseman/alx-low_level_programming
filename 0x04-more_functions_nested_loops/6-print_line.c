#include "main.h"

/**
 *print_line - print a line on the terminal
 *@n: number of times "_" character is printed
 *
 *Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
