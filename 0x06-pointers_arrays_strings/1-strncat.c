/**
 * _strncat -  appends the src string to the dest string
 * @dest: string that would be appended to
 * @src: string to append to the first string
 * @n: number of characters to append from src
 *
 * Return: a pointer to the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int x;

	while (*dest)
	{
		if (!*p)
			break;
		p++;
	}
	for (x = 0; x < n; x++)
	{
		*p = *src;
		if (!*src)
			break;
		p++;
		src++;
	}
	return (dest);
}
