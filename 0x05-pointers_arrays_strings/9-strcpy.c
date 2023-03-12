/**
 * _strncpy -  copies the src string to the dest string
 * @dest: string that would be copied to
 * @src: string to be copied
 *
 * Return: a pointer to the dest string
 */
char *_strcpy(char *dest, char *src);
{
	char *p = dest;
	int x;
	int end = 0;

	while (1)
	{
		*p = *src;
		if (!*src)
		{
			break;
		}
		src++;
		p++;
	}
	return (dest);
}
