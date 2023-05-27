#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memeory block using malloc and free.
 * @ptr: pointer to memory previously allocated.
 * @old_size: the size in bytes of the alocated space for ptr
 * @new_size: size in bytes for new memory block
 *
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	unsigned int index;
	char *ptr_copy, *filler;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		m = malloc(new_size);

		if (m == NULL)

			return (NULL);
		return (m);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = ptr;
	m = malloc(sizeof(*ptr_copy) * new_size);

	if (m == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = m;

	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *ptr_copy++;

	free(ptr);
	return (m);

}
