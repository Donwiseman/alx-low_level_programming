/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to a tsring whose length is to be returned
 *
 * Return: returns the length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (!*s)
		return (0);
	len++;
	len += _strlen_recursion((s + 1));
	return (len);
}
