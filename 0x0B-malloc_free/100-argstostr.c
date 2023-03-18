#include <stdlib.h>

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

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: returns a pointer to the concantenated string
 */
char *argstostr(int ac, char **av)
{
	int len;
	int count;
	char *concat;
	char *p;
	int x = 0;

	if (ac == 0 ||  av == NULL)
		return (NULL);
	for (count = 0; count < ac; count++)
	{
		len += _strlen(av[count]) + 1;
	}
	len += 1; /*add an extra byte for the last terminating char*/
	count = 0;
	concat = malloc(len);
	if (concat == NULL)
		return (NULL);
	while (count < ac)
	{
		p = av[count];
		while (1)
		{
			if (*p)
			{
				concat[x] = *p;
				p++;
				x++;
			}
			else
			{
				concat[x] = '\n';
				x++;
				break;
			}
		}
		count++;
	}
	concat[x] = '\0';
	return (concat);
}
