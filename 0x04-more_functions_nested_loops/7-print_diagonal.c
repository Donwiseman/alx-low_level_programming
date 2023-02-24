#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: determines length of diagonal line
 */
void print_diagonal(int n)
{
	int counter;
	int spacecounter;

	for (counter = 0; counter < n; counter++)
	{
		for (spacecounter = 0; spacecounter < counter; spacecounter++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (counter < n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
