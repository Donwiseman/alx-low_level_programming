#include "main.h"

/**
 * puts_half - prints later half of a string to stdout
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	char *p = str;
	int len = 0;
	int count;

	while (*str)
	{
		if (!*p)
			break;
		p++;
		len++;
	}
	for (count = 0; count < (len / 2); count++)
	{
		_putchar(*(str + (len / 2) + count));
	}
	_putchar('\n');
}
