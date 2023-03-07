#include <stddef.h>

/**
 * _strstr - finds the first occurrence of the substring needle in haystack
 * @haystack: string to be searched
 * @needle: substring being searched
 *
 * Return: Returns a pointer to the start of the found substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;
	char *n = (char *) 0;
	unsigned int x;
	unsigned short int not_found;

	while (*p)
	{
		x = 0;
		not_found = 0;
		while (*(needle + x))
		{
			if (*(p + x) != *(needle + x))
			{
				not_found = 1;
				break;
			}
			x++;
		}
		if (not_found == 0)
			return (p);
		p++;
	}
	return (n);
}
