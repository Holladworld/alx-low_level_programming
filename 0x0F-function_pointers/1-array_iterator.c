#include "function_pointers.h"

/**
 * array_iterator - excute a function  given as a parameter
 * on each element of an array
 * @array: the array
 * @size: size of array of the array
 * @action: pointer to print in regular or hex
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;

	}
}
