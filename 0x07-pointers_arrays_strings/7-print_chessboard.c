#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the 2D array
 */
void print_chessboard(char (*a)[8])
{
	char *p;
	char c;
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			p = a[i];
			c = *(p + j);
			_putchar(c);
		}
		_putchar('\n');
	}
}
