/**
*print_alphabet - print alphabet in lowercase
*
* Return: O if it executes with no error
*/
void print_alphabet(void)
{
	char c = a;

	while (c <= z)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
