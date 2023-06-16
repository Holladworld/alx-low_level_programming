#include "main.h"

/**
 * _calloc - function that allocate memeory to an array
 * @nmemb: number of element in the array
 * @size: size of element of array
 * Return: NULL if size is zero and if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *arry;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}


	arry = mem;

	for (a = 0; a < nmemb * size; a++)
	{
		arry[a] = 0;
	}
	return (mem);
}
