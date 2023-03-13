#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the addition of numerical arguments passed to stdout
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if runs corretly and 1 otherwise
 */
int main(int argc, char *argv[])
{
	int x;
	int sum = 0;

	for (x = 1; (x > 0 && x < argc); x++)
	{
		char *s = argv[x];

		while (*s)
		{
			if (!isdigit(*s))
			{
				printf("Error\n");
				return (1);
			}
			s++;
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
