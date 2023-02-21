#include <stdio.h>

/**
 * main - prints all single digit of decimal numbers seperated by a comma
 *
 * Return: returns 0 if function runs with no errors
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
