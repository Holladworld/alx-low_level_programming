#include "main.h"
#include <stdlib.h>
/**
 * array_range - creats and array of integers in order of minimum to
 * maximum
 * @min: minimum array
 * @max: maximum array
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *aray;
	int sze;

	if (min > max)
		return (NULL);

	aray = malloc(sizeof(*aray) * ((max - min) + 1));

	if (aray == NULL)
		return (NULL);

	for (sze = 0; min <= max; sze++, min++)
		aray[sze] = min;

	return (aray);
}

