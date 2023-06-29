#include "main.h"
/**
 * create_array - create array of char
 * @size: array size
 * @c: char of array
 *
 * Return: Pointer to array if not return NULL
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int dest = 0;

	if (size == 0)
	{
		return (NULL);
	}
	pointer = (char *) malloc(sizeof(char) * size);

	if (!pointer)
	{
		return (0);
	}
	while (dest < size)
	{
		*(pointer + dest) = c;
		dest++;
	}
	*(pointer + dest) = '\0';
	return (pointer);
}
