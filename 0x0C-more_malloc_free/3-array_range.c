#include "main.h"
/**
 * array_range - function to create array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: NULL if malloc fails and if min > max.
 *
 */
int *array_range(int min, int max)
{
	int rang = 0;
	int b;
	int *a;


	if (min > max)
	{
		return (NULL);
	}
	rang = ((max + 1) - min);

	a = malloc(rang * sizeof(int));

	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < rang; b++)
	{
		*(a + b) = min + b;
	}
	return (a);
}
