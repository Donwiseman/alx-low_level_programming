#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously created
 * @grid: 2D array pointer
 * @height: row of 2D array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
