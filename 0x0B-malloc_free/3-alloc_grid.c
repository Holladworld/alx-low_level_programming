#include "main.h"
/**
 * alloc_grid - function to create 2 dimensional of array
 * @width: int width
 * @height: height
 * Return: pointer to new grid
 */
int **alloc_grid(int width, int height)
{
	int old, new, **gridAlloc;

	if (width < 1 || height < 1 || width + height < 2)
	{
		return (NULL);
	}
	gridAlloc = malloc(height * sizeof(*gridAlloc));

	if (!gridAlloc)
	{
		free(gridAlloc);
		return (NULL);
	}
	for (old = 0; old < height; old++)
	{
		gridAlloc[old] = malloc(width * sizeof(**gridAlloc));
		if (gridAlloc[old] == NULL)
		{
			for (old--; old >= 0; old--)
				free(gridAlloc[old]);
			free(gridAlloc);
			return (NULL);
		}
		for (new = 0; new < width; new++)
			gridAlloc[old][new] = 0;
	}
	return (gridAlloc);
}
