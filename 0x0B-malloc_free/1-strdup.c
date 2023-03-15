#include <stdlib.h>

/**
 * _strdup - returns a pointer to a duplicated string using allocated memory
 * @str: string to duplicate
 *
 * Return: returns a pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *p = NULL;
	char *s = str;
	int len = 0;
	int x = 0;

	if (str == NULL)
		return (NULL);
	while (*s)
	{
		len++;
		s++;
	}
	p = malloc(len + 1);
	while (p != NULL)
	{
		if (x < (len + 1))
		{
			p[x] = str[x];
			x++;
		}
		else
			break;
	}
	return (p);
}
