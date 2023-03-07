#include <stddef.h>

/**
 * _strchr - finds the first occurrence of the character c in the string s
 * @s: string to be searched
 * @c: character to search
 *
 * Return: Returns a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (1)
	{
		if (*p == c)
			return (p);
		if (*p == '\0')
			break;
		p++;
	}
	return (NULL);
}
