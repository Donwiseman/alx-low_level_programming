#include "main.h"
/**
*print_alphabet_x10 - print alphabet in lowercase
*
* Return: O if it executes with no error
*/
void print_alphabet_x10(void)
{
	int a = 0;
	char c = 'a';

	while (a < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		a++;
	}
}
