#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int a;
	int b;
	int x;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			x = a * b;
			if (x < 10)
			{
				_putchar(48 + x);
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(48 + (x / 10));
				_putchar(48 + (x % 10));
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			if (b == 9)
				_putchar('\n');
		}
	}
}
