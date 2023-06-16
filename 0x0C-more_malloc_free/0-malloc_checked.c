#include "main.h"
/**
 * malloc_checked - Function to allocate memory using malloc
 * @b: the bytes that's allocated
 * Return: pointer. if failed return 98
 */
void *malloc_checked(unsigned int b)
{
	void *mem_allocated;

	mem_allocated = malloc(b);

	if (mem_allocated == NULL)
		exit(98);
	return (mem_allocated);
