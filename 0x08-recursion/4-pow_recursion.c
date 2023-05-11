#include "main.h"

/**
 * _pow_recursion - returns function value of x raised to the power y.
 * @y: the power or exponent.
 * @x: the base or value to be raised.
 *Return: value of the power.
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	res *= _pow_recursion(x, y - 1);
	return (res);
}
