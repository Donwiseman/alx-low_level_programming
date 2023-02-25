#include "main.h"

/**
 *jack_bauer - prints every minute of the day, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hr_a;
	int hr_b;
	int min_a;
	int min_b;

	for (hr_a = 0; hr_a < 3; hr_a++)
	{
		for (hr_b = 0; hr_b < 10; hr_b++)
		{
			if (hr_a == 2 && hr_b == 4)
			{
				hr_a = 13;
				break;
			}
			for (min_a = 0; min_a < 6; min_a++)
			{
				for (min_b = 0; min_b < 10; min_b++)
				{
					_putchar(48 + hr_a);
					_putchar(48 + hr_b);
					_putchar(':');
					_putchar(48 + min_a);
					_putchar(48 + min_b);
					_putchar('\n');
				}
			}
		}
	}
}
