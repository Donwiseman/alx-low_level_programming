#include "main.h"

/**
 *more_numbers - prints 10 times the numbers, from 0 to 14.
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			int c = b;

			if (b > 9)
			{
				_putchar('1');
				c -= 10;
			}
			_putchar(48 + c);
		}
		_putchar('\n');
	}
}
