/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to change
 *
 * Return: returns a pointer to the string
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*p)
	{
		if (*p >= 97 && *p < 123)
			*p -= 32;
		p++;
	}
	return (s);
}
