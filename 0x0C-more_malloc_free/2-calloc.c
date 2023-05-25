#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array of inputted byte size
 * @nmemb: number of elements
 * @size: byte of each array element
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int entry;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);
	filler = mem;

	for (entry = 0; entry < (size * nmemb); entry++)
		filler[entry] = '\0';

	return (mem);
}
