#include "main.h"
/**
*print_alphabet_x10 - print alphabet in lowercase
*
* Return: O if it executes with no error
*/
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		a++;
	}
}
