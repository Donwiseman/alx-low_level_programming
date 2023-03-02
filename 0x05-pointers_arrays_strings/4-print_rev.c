#include "main.h"

/**
 * print_rev -  write a string to the stdout
 * @s: pointer to a string
 */
void print_rev(char *s)
{
	char *p = s;
	int x = 1;

	if (*p == '')
		x = 0;
	while (x)
	{
		if (!*p)
			break;
		p++;
	}
	while (x)
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
