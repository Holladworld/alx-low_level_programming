#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char.
 * @size: size of array to be initialized
 * @c: char to initialize array with
 * Return: if size == 0 or function fails - NULL
 * otherwise - a pointer to the array
 */
char *create_array(unsigned in size, char c)
{
	char *array;
	unsigned int entry;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (entry = 0; index < size; entry++)
		array[entry] = c;
	return (array);
}
