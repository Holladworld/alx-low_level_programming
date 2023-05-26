#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: sum of parameters to be inputted
 * @...: variable number  parameters to calculate the sum of
 * Return: sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	unsigned int nums, sum = 0;

	va_start(params, n);

	for (nums = 0; nums < n; nums++)
		sum += var_arg(params, int);

	va_end(params);

	return (sum);
}
