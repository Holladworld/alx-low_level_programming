#include "function_pointers.h"

/**
 * int_index - function that search for integers in arrays of integers
 * @array: size of an array
 * @cmp: pointer to the function to be used to compare values
 * Return: int_index if the first element of cmp does not
 * return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int int_array;


	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (int_array = 0; int_array < size; int_array++)
		{
			if (cmp(array[int_array]) != 0)
				return (int_array);
		}
	}
		return (-1);
}

