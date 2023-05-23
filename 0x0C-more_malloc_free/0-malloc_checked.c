#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 * Return: pointer to allocated memory if malloc fails, status
 * value is equal to 98
 */
void *malloc_checked(unsigned int b)
{

	void *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
