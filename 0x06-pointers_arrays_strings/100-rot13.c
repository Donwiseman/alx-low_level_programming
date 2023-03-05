/**
 * rot13 - encodes a string into ROT13
 * @s: string to be encoded
 *
 * Return: returns a pointer to the string
 */
char *rot13(char *s)
{
	char *p = s;

	while (*p)
	{
		while ((*p >= 65 && *p <= 90) || (*p >= 97 && *p <= 122))
		{
			if ((*p >= 65 && *p <= 77) || (*p >= 97 && *p <= 109))
			{
				*p += 13;
				break;
			}
			*p -= 13;
			break;
		}
		p++;
	}
	return (s);
}
