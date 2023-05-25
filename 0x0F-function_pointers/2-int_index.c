#include "function_pointers.h"

/**
 * int_index - searches for integer in array of integers
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer  to the function to be used to compare values
 * Return: the index of the first element for which the cmp function
 * does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int int_array;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (int_array = 0; int_array < size; int_array++)
	{
		if (cmp(array[int_array]) != 0)
			return (int_array);
	}
	return (-1);
}
