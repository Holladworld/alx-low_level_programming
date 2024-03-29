#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer of an unsigned long int
 * @index:  index, starting from 0 of the bit you want to set
 * Return:  1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int value;

	if (index > 63)
		return (-1);
	value = 1 << index;

	if (*n & value)
		*n ^= value;
	return (1);
}
