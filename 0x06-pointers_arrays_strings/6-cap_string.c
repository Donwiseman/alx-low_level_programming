/**
 * cap_string - capitalizes the first character in a string after some char
 * @s: string to be changed
 *
 * Return: returns a pointer to the string
 */
char *cap_string(char *s)
{
	char *p = s;
	int x = 0;/* to store if seperator character present*/

	while (*p)
	{
		if (x == 1 && (*p >= 97 && *p < 123))
		{
			*p -= 32;
			x = 0;
		}
		else
		{
			x = 0;
		}
		switch (*p)
		{
			case 9:
			case 10:
			case 32:
			case 33:
			case 34:
			case 40:
			case 41:
			case 44:
			case 46:
			case 59:
			case 63:
			case 123:
			case 125:
				x = 1;
				break;
		}
		p++;
	}
	return (s);
}
