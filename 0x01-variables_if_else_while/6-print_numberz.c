#include <stdio.h>

/**
 * main - prints all single digit of decimal numbers
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
	putchar('\n');
	return (0);
}
