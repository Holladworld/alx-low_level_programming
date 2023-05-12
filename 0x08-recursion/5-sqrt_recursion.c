#include "main.h"

/**
 * power_operation  - returns the natural number of a number.
 * @num:sqaure integer
 * @r0t: integer
 * Return: square root of the number or -1.
 */
int power_operation(int num, int r0t)
{
	if (r0t * r0t == num)
		return (r0t);
	else if (r0t > num / r0t)
		return (power_operation(r0t, num - 1));
	else if (r0t < num / r0t)
		return (power_operation(r0t, num + 1));
	else
		return (-1);

}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @num: input number(integer).
 * Return: integer -square root, if none returns -1
 */

int _sqrt_recursion(int num)
{
	int start;

	start = 1;

	if (num < 0)
		return (-1);
	else if (num == 1)
		return (1);
	else
		return (power_operation(num, start));
}
