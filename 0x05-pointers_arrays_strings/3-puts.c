#include "main.h"

/**
 * _puts -  write a string to the stdout
 * @str: pointer to a string
 */
void _puts(char *str)
{
	char *p = str;

	while (1)
	{
		if (!*p)
			break;
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
