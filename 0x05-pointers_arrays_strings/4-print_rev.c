#include "main.h"

/**
 * print_rev -  write a string to the stdout
 * @s: pointer to a string
 */
void print_rev(char *s)
{
	char *p = s;

	while (*s)
	{
		if (!*p)
			break;
		p++;
	}
	while (*s)
	{
		p--;
		_putchar(*p);
		if (p == s)
		{
			break;
		}
	}
	_putchar('\n');
}
