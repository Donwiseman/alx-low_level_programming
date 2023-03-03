/**
 * _strncpy -  copies the src string to the dest string
 * @dest: string that would be copied to
 * @src: string to be copied
 * @n: number of characters to append from src
 *
 * Return: a pointer to the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int x;
	int end = 0;

	for (x = 0; x < n; x++)
	{
		if (!*src)
			end = 1;
		if (end == 0)
		{
			*p = *src;
			src++;
		}
		else
		{
			*p = '\0';
		}
		p++;
	}
	return (dest);
}
