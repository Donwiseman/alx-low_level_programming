#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: pointer to a string
 *
 * Return: returns the length of the given string minus the terminating string
 */
int _strlen(char *s)
{
	int len = 0;
	char *p = s;

	while (1)
	{
		if (!*p)
			break;
		p++;
		len++;
	}
	return (len);
}
