#include "function_pointers.h"

/**
 * array_iterator - function that execute a qunction given as parameter
 * @array: array
 * @size: size of array of the array
 * @action: pointer to print inregular or hex
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array == NULL || action == NULL)

		return;

	while (size-- > 0)
	{
		action(*array);
		array++;

	}

}

