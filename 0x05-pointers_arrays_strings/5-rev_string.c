#include "main.h"

/**
 * rev_string - reverses a given string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	char *p = s;
	int len = 0;
	int count;
	int temp;

	while (*s)
	{
		if (!*p)
			break;
		p++;
		len++;
	}
	for (count = 0; count < len / 2; count++)
	{
		p--;
		temp = *(s + count);
		*(s + count) = *p;
		*p = temp;
		len--;
	}
}
