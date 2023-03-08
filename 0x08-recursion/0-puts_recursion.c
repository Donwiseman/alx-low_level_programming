#include "main.h"

/**
 * _puts_recursion - prints out a string to stdout
 * @s: pointer to string to be printed
 */
void _puts_recursion(char *s)
{
	char *p = s;
	int end = 0;

	_putchar(*p);
	if (!*s)
	{
		_putchar('\n');
		end = 1;
	}
	if (!end)
	{
		p++;
		_puts_recursion(p);
	}
}
