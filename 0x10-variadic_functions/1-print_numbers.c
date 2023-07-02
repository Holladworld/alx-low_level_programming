#include "variadic_functions.h"
/**
 * print_numbers - function to print numbers
 * @separator: string to be printed
 * @n: arguments to e passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int counts;

	va_start(numbs, n);

	for (counts = 0; counts < n; counts++)
	{
		printf("%d", va_arg(numbs, unsigned int));
		if (counts < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbs);
	print("\n");
}
