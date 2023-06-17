#include "main.h"
/**
 * *_realloc - function to rellocate a memory bloc using malloc and free
 * @ptr: pinter to previous allocate memory
 * @old_size: size of allocated memory
 * @new_size: new size of the memory block
 * Return: pointer to newly allocated block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int index = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	new_ptr = malloc(new_size);

	if (!new_ptr)
	{
		return (NULL);
	}
	old_ptr = ptr;
	if (new_size < old_size)
	{
		while (index < new_size)
		{
			index++;
			new_ptr[index] = old_ptr[index];
		}
	}
	if (new_size > old_size)
	{
		for (index = 0; index < old_size; index++)
		{
			new_ptr[index] = old_ptr[index];
		}
	}
	free(ptr);
	return (new_ptr);
}
