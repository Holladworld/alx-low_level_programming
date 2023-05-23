#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensional arrays of
 * integers with each elemnt initialized to 0
 * @width: width of the 2-dimensional array
 * @height: height of the 2 dimensional array
 *
 * Return:  NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **D_2;
	int ht_index, wt_index;

	if (width <= 0 || height <= 0)
		return (NULL);
	D_2 = malloc(sizeof(int *) * height);

	if (D_2 == NULL)
		return (NULL);

	for (ht_index = 0; ht_index < height; ht_index++)
	{
		D_2[ht_index] = malloc(sizeof(int) * width);
		if (D_2[ht_index] == NULL)

		{
			for (; ht_index >= 0; ht_index--)
				free(D_2[ht_index]);

			free(D_2);
			return (NULL);
		}
	}
	for (ht_index = 0; ht_index < height; ht_index++)
	{
		for (wt_index = 0; wt_index < width; wt_index++)
			D_2[ht_index][wt_index] = 0;
	}
	return (D_2);
}
