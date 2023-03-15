#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of column of the 2D array
 * @height: number of rows of the 2D array
 *
 * Return: a pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr = malloc(height * sizeof(int *));
	int i;
	int x;

	if (arr == NULL || width == 0 || height == 0)
		return (NULL);
	for (i = 0; i < height; i++)
		arr[i] = (int *)(malloc(width * sizeof(int)));
	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
		{
			arr[i][x] = 0;
		}
	}
	return (arr);
}
