/**
 * _strspn - finds the number of bytes in the initial segment of s from accept
 * @s: string to be matched
 * @accept: matching string
 *
 * Return: Returns the number of bytes matched from accept string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	unsigned int x;
	unsigned short int found;

	while (*s)
	{
		found = 0;
		x = 0;
		while (*(accept + x))
		{
			if (*(s + byte) == *(accept + x))
			{
				found = 1;
				break;
			}
			x++;
		}
		if (found == 0)
			break;
		byte++;
	}
	return (byte);
}
