#include "main.h"

/**
 *print_triangle - prints a triangle using "#"
 *@size: size of triangle to be printed
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = size - a - 1; b > 0; b--)
		{
			_putchar(' ');
		}
		for (c = 0; c < a + 1; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
