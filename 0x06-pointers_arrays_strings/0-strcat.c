/**
 * _strcat -  appends the src string to the dest string
 * @dest: string that would be appended to
 * @src: string to append to the first string
 *
 * Return: a pointer to the dest string
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest)
	{
		if (!*p)
			break;
		p++;
	}
	while (*src)
	{
		*p = *src;
		if (!*src)
			break;
		p++;
		src++;
	}
	return (dest);
}
