#include "main.h"
/**
 * factorial - Returns factorial of a given number.
 * @n: the input number
 * Return: if n > 0 - the factorial of n.
 *	if n < 0 - 1 to indicate error.
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
