#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0;
	int x = 0;
	char *concat;
	char *p1 = s1;
	char *p2 = s2;

	while (p1 && *p1)
	{
		len++;
		p1++;
	}
	while (p2 && *p2)
	{
		len++;
		p2++;
	}
	concat = malloc(len + 1);
	p1 = s1;
	p2 = s2;
	while (concat != NULL)
	{
		if (p1 && *p1)
		{
			concat[x] = *p1;
			p1++;
		}
		else if (p2 && *p2)
		{
			concat[x] = *p2;
			p2++;
		}
		else
		{
			concat[x] = '\0';
			break;
		}
		x++;
	}
	return (concat);
}
