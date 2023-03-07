/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area to be copied to
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: return a pointer to the new  memory area with the copied data
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int temp;
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		temp = *(src + x);
		*(dest + x) = temp;
	}
	return (dest);
}
