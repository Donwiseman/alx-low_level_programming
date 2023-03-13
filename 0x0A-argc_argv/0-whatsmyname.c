#include <stdio.h>

/**
 * main - prints the name of this program to stdout
 * @argc: default count of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 if executed succesfully
 */
int main(int argc, char *argv[])
{
	char *s = argv[0];
	(void)argc;

	printf("%s\n", s);
	return (0);
}
