#include <ctype.h>

/**
*_isalpha - checks if it is an.alphabet
*@c: input character type
*
* Return: 1 if true and 0 if false
*/
int _isalpha(int c)
{
	int is_alpha = isalpha(c);

	if(is_alpha > 0)
		return (1);
	else
		return (0);
}
