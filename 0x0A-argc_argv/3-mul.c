#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of the two arguments passed to stdout
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if runs corretly and 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (int)atoi(argv[1]) * (int)atoi(argv[2]));
		return (0);
	}
}
