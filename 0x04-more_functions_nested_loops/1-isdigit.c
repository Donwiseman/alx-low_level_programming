#include <ctype.h>

/**
 *_isupper - checks if a character is a digit
 *@c: input character
 *
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	int check = isdigit(c);

	if (check > 0)
		return (1);
	else
		return (0);
}
