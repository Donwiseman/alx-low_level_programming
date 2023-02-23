#include <ctype.h>

/**
*_islower - checks if alphabet is lowercase
*@c: input character type
*
* Return: 1 if true and 0 if false
*/
int _islower(int c)
{
	int is_low = islower(c);

	if(is_low > 0)
		return (1);
	else
		return (0);
}
