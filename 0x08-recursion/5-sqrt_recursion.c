#include "main.h"
/**
 * sqr_func - Function to find square root
 * @num: number to determine square root
 * @sqr: square root
 * Return: Square root if natural number
 * -1 if none
*/
int sqr_func(int num, int sqr)
{
	if (num < 0)
	{
		return (-1);
	}
	else if (sqr * sqr == num)
	{
		return (sqr);
	}
	else if (sqr < num)
	{
		return (sqr_func(num, ++sqr));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - Function that return natural square root of number
 * @n: integer number
 * Return: -1 if n does not have natural number
 */
int _sqrt_recursion(int n)
{
	return (sqr_func(n, 1));
}
