/**
 * print_name - prints the name which is passed
 * @name: a string representing the name
 * @f: pointer to a function to be used to print the name normally or in Caps
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
