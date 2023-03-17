#include <stdlib.h>

/**
 * array_range - creates a range of an array of integers.
 * @min: minumum value in range
 * @max: maximum value in range
 *
 * Return: a pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int *p = NULL;
	int *p1;
	int x;

	if (min <= max)
		p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	p1 = p;
	for (x = min; x <= max; x++)
	{
		*p1 = x;
		p1++;
	}
	return (p);
}
