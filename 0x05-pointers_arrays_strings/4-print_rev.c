#include "main.h"

/**
 * print_rev -  write a string to the stdout
 * @s: pointer to a string
 */
void print_rev(char *s)
{
	char *p = s;

	while (1)
	{
		if (!*p)
			break;
		p++;
	}
	while (1)
	{
		p--;
		_putchar(*p);
		if (p == s)
		{
			_putchar('\0');
			break;
		}
	}
	_putchar('\n');
}
