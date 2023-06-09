#include "main.h"

/**
 * factorial - function that rturn factoria of number
 * @n: number to check the factorial
 * Return: -1 if n is lower than zero as error.
 */
int factorial(int n)
{
	/* deciding the  base case */
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	/* factorial formular */
	return (n * factorial(n - 1));
}
