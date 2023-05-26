#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 * @...: variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int nums;

	va_start(args, n);


	for (nums = 0; nums < n; nums++)
	{
		printf("%d", va_arg(args, int));

		if (nums != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
