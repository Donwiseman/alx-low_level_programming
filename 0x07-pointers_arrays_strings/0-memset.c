/**
 * _memset - fills the first n bytes of the memory area pointed to by s with b
 * @s: string to be fille
 * @b: single byte character to use to fill
 * @n: number of bytes to be filled
 *
 * Return: returns a pointer to the filled byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
