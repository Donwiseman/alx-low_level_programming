#include "main.h"
#include <stdlib.h>

/**
 * print_number - prints an integer to the stdout
 * @n: integer to be printed
 */
void print_number(int n)
{
	int a0, b1, c2, d3, e4, f5, g6, h7, i8, j9;
	int lastn;
	int count = 0;

	a0 = b1 = c2 = d3 = e4 = f5 = g6 = h7 = i8 = j9 = -1;
	if (n < 0)
		_putchar('-');
	while (1)
	{
		lastn = abs(n % 10);
		if (count == 0)
			a0 = lastn;
		else if (count == 1)
			b1 = lastn;
		else if (count == 2)
			c2 = lastn;
		else if (count == 3)
			d3 = lastn;
		else if (count == 4)
			e4 = lastn;
		else if (count == 5)
			f5 = lastn;
		else if (count == 6)
			g6 = lastn;
		else if (count == 7)
			h7 = lastn;
		else if (count == 8)
			i8 = lastn;
		else if (count == 9)
			j9 = lastn;
		n /= 10;
		if (n == 0)
			break;
		count++;
	}
	switch (count)
	{
		case 9:
			_putchar(48 + j9);
			_putchar(48 + i8);
			_putchar(48 + h7);
			_putchar(48 + g6);
			_putchar(48 + f5);
			_putchar(48 + e4);
			_putchar(48 + d3);
			_putchar(48 + c2);
			_putchar(48 + b1);
			_putchar(48 + a0);
			break;
		case 8:
			_putchar(48 + i8);
			_putchar(48 + h7);
			_putchar(48 + g6);
			_putchar(48 + f5);
			_putchar(48 + e4);
			_putchar(48 + d3);
			_putchar(48 + c2);
			_putchar(48 + b1);
			_putchar(48 + a0);
			break;
		case 7:
			_putchar(48 + h7);
			_putchar(48 + g6);
			_putchar(48 + f5);
			_putchar(48 + e4);
			_putchar(48 + d3);
			_putchar(48 + c2);
			_putchar(48 + b1);
			_putchar(48 + a0);
			break;
		case 6:
			_putchar(48 + g6);
			_putchar(48 + f5);
			_putchar(48 + e4);
			_putchar(48 + d3);
			_putchar(48 + c2);
			_putchar(48 + b1);
			_putchar(48 + a0);
			break;
		case 5:
			_putchar(48 + f5);
			_putchar(48 + e4);
			_putchar(48 + d3);
			_putchar(48 + c2);
			_putchar(48 + b1);
			_putchar(48 + a0);
			break;
		case 4:
			_putchar(48 + e4);
			_putchar(48 + d3);
			_putchar(48 + c2);
			_putchar(48 + b1);
			_putchar(48 + a0);
			break;
		case 3:
			_putchar(48 + d3);
			_putchar(48 + c2);
			_putchar(48 + b1);
			_putchar(48 + a0);
			break;
		case 2:
			_putchar(48 + c2);
			_putchar(48 + b1);
			_putchar(48 + a0);
			break;
		case 1:
			_putchar(48 + b1);
			_putchar(48 + a0);
			break;
		case 0:
			_putchar(48 + a0);
			break;
		default:
			_putchar('0');
	}
}
