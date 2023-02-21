#include <stdio.h>

/**
 * main - prints all possible combinations of two digits with no repitition
 *
 * Return: 0 if it executes with no error
 */
int main(void)
{
	int loop1 = 0;

	while (loop1 < 10)
	{
		int loop2 = loop1 + 1;  /*done to avoid repitition*/

		while (loop2 < 10)
		{
			putchar(48 + loop1); /*print first number combination*/
			putchar(48 + loop2); /*print 2nd number combination*/
			if (loop1 != 8)
			{
				putchar(44); /*print a comma*/
				putchar(32); /*print a space*/
			}
			loop2++;
		}
		loop1++;
	}
	putchar('\n');
	return (0);
}
