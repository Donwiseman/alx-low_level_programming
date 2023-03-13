#include <stdio.h>

/**
 * main - prints number of arguments passed to stdout
 * @argc: argument count
 * @argv: pinter array to arguments passed
 *
 * Return: 0 if program executes with no error
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
