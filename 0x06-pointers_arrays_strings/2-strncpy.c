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
