#include "variadic_functions.h"

/**
 * print_strings - function that print string followed by new line
 * @separator: operators between string to be printed
 * @n: argument passed as string
 * @...: variable of string to be printed
 *
 *Return: NULL if separator is not printed and nil if string is null
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *string;
	unsigned int count;

	va_start(list, n);

	for (count = 0; count < n; count++)
	{
		string = va_arg(list, char *);

		if (!string)
			printf("(nil)");
		else
			printf("%s", string);
		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
