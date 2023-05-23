#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional array of integers
 * @grid: the 2 dimesional arrat of integer to be freed
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int array;

	for (array = 0; array < height; array++)
		free(grid[array]);

	free(grid);
}
