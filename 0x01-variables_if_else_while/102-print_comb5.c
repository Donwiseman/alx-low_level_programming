#include <stdio.h>

/**
 * main - prints all possible combinations of a two two_digit numbers
 *
 * Return: 0 if it executes with no error
 */
int main(void)
{
	int loop1a = 0;

	while (loop1a < 10)
	{
		int loop1b = 0;

		while (loop1b < 10)
		{
			int loop2a = loop1a;
			/*to avoid repitition with first 2-digit*/
			int loop2b = loop1b + 1;

			while (loop2a < 10)
			{

				while (loop2b < 10)
				{
					/*print first two digit and a space*/
					putchar(48 + loop1a);
					putchar(48 + loop1b);
					putchar(32);
					/*print 2nd two digit number*/
					putchar(48 + loop2a);
					putchar(48 + loop2b);
					/*condition to handle last-num comma*/
					if (!(loop1a == 9 && loop1b == 8))
					{
						putchar(44); /*print a comma*/
						putchar(32); /*print a space*/
					}
					loop2b++;
				}
				loop2a++;
				loop2b = 0;
			}
			loop1b++;
		}
		loop1a++;
	}
	putchar('\n');
	return (0);
}
