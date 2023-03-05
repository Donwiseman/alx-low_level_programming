/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: returns a pointer to the string
 */
char *leet(char *s)
{
	char *p = s;
	int i;
	char codes[] = {'A', 'E', 'O', 'T', 'L'};
	char encodings[] = {'4', '3', '0', '7', '1'};

	while (*p)
	{
		for (i = 0; i < 5; i++)
		{
			if (*p == codes[i] || *p == (codes[i] + 32))
				*p = encodings[i];
		}
		p++;
	}
	return (s);
}
