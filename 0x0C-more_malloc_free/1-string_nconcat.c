#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of char from s2 to copy
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len;
	unsigned int x = 0;
	char *concat;
	char *p1 = s1;
	char *p2 = s2;

	while (p1 && *p1)
	{
		len1++;
		p1++;
	}
	len = len1 + n;
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
		else if (p2 && *p2 && (x < len))
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
