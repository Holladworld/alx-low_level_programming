#include "main.h"
/**
 * get_bit - return the value of bit at given index
 * @n: the unsigned long integer
 * @index: the index of the that start from 0
 * Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value;

	if (n == 0 && index < 64)
		return (0);

	for (value = 0; value <= 63; n >>= 1, value++)
		if (index == value)
			return (n & 1);
	return (-1);
}
