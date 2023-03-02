#include "main.h"

/**
 * rev_string - reverses a given string
 * @s: pointer to a string
 */
void rev_string(char *s)
{
	char *p = s;
	int len = 0;
	int count = 0;
	int wrd[30];

	while (*s)
	{
		if (!*p)
			break;
		wrd[len] = *p;
		p++;
		len++;
	}
	while (len > 0)
	{
		p--;
		*(s + count) = wrd[len - 1];
		count++;
		len--;
	}
}
