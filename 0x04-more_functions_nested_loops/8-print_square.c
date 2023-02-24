#include "main.h"

/**
 *print_square - print a square shape made of "#"
 *@size: size of square to be printed
 */
void print_square(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
