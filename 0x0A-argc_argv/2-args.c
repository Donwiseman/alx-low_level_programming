#include <stdio.h>

/**
 * main - prints all arguments to stdout
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if program runs with no errors
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
