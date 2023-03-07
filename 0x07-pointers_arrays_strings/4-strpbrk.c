#include <stddef.h>

/**
 * _strpbrk - finds the first occurrence in s of any of the bytes in the accept
 * @s: string to be searched
 * @accept: string containing search characters
 *
 * Return: Returns a pointer to the start of the found character
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = s;
	unsigned int x;
	unsigned short int found = 0;

	while (*p)
	{
		x = 0;
		while (*(accept + x))
		{
			if (*p == *(accept + x))
			{
				found = 1;
				break;
			}
			x++;
		}
		if (found == 1)
			return (p);
		p++;
	}
	return (NULL);
}
