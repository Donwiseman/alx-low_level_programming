#include <stdio.h>

/**
 * main - prints all possible combinations of three digits with no repitition
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
			int loop3 = loop2 + 1; /*avoids repitition*/

			while (loop3 < 10)
			{
				putchar(48 + loop1); /*print 1st number*/
				putchar(48 + loop2); /*print 2nd number*/
				putchar(48 + loop3); /*print 3rd number*/
				if (loop1 != 7)
				{
					putchar(44); /*print a comma*/
					putchar(32); /*print a space*/
				}
				loop3++;
			}
			loop2++;
		}
		loop1++;
	}
	putchar('\n');
	return (0);
}
