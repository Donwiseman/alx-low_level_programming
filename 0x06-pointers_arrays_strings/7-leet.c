/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: returns a pointer to the string
 */
char *leet(char *s)
{
	char *p = s;

	while (*p)
	{
		if (*p == 97 || *p == 65)
			*p = 52;
		else if (*p == 101 || *p == 69)
			*p = 51;
		else if (*p == 111 || *p == 79)
			*p = 48;
		else if (*p == 116 || *p == 84)
			*p = 55;
		else if (*p == 108 || *p == 76)
			*p = 49;
		p++;
	}
	return (s);
}
