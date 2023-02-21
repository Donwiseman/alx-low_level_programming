#include <stdio.h>

/**
 * main - prints all numbers of hexadecimal in lowercase
 *
 * Return: returns 0 if function runs with no errors
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}
	n = 0;
	while (n < 6)
	{
		putchar(97 + n);
		n++;
	}
	putchar('\n');
	return (0);
}
