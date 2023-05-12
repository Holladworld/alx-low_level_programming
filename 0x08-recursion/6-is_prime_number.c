#include "main.h"

/**
 * is_divisible - function that checks if a number is divisible.
 * @n: number to evalaute.
 * @div: the divisor.
 * Return: 1 if n is divisible, 0 if not.
 */
int is_divisible(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);
	return (is_divisible(n, div + 1));
}
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @num: number to evaluate
 * Return: 1 if n is prime, 0 if not.
 */
int is_prime_number(int num)
{
	int div = 2;

	if (num <= 1)
		return (0);
	if (num >= 2 && num <= 3)
		return (1);
	return (is_divisible(num, div));
}
