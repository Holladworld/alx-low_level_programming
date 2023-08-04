#include "main.h"
/**
 * flip_bits - numbers to flip from one to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nflip;

	for (nflip = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((m & 1) != (n & 1))
			nflip += 1;
		;
	}
	return (nflip);
}
