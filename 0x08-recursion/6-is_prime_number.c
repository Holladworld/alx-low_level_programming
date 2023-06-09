#include "main.h"
/**
 * prime_number - recursive function to check prime
 * @num: number given to is_prime function
 * @divider: divisor
 * Return: 1 if prime and 0 if not prime
 */
int prime_number(int divider, int num)
{
	if (divider < num)
	{
		if (num % divider  == 0)
		{
		return (0);
		}
		else if (divider == num / 2)
		{
		return (1);
		}
		else
		{
			++divider;
			return (prime_number(divider, num));
		}
	}
	else
	{
		return (1);
	}

}

/**
 * is_prime_number - function that return 1 if input is prime number
 * @n: integer numbe
 * Return: if input is prime return 1 otherwise return 0
 */
int is_prime_number(int n)
{

	int prime_number(int divider, int num);
	int divider = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n % n == 0 || n % 1 == 0)
	{
		if (prime_number(divider, n) != 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
