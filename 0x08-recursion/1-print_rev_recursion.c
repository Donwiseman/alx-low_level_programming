#include "main.h"

/**
 * _print_rev_recursion - prints out a string to stdout
 * @s: pointer to string to be printed
 */
void _print_rev_recursion(char *s)
{
	char *p = s;
	int end = 0;

	if (!*s)
	{
		end = 1;
	}
	if (!end)
	{
		p++;
		_print_rev_recursion(p);
		_putchar(*s);
	}
}
