#include "variadic_functions.h"
/**
 * print_all - print all, anything, everything
 * @format: list of argument passed
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *string;
	unsigned int i = 0, g, b = 0;
	const char t_arg[] = "cifs";

	va_start(list, format);
	while (format && format[i])
	{
		g = 0;
		while (t_arg[g])
		{
			if (format[i] == t_arg[g] && b)
			{
				printf(", ");
				break;
			} g++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int)), b = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int)), b = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), b = 1;
				break;
			case 's':
				string = va_arg(list, char *), b = 1;
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		} i++;
	}
	printf("\n"), va_end(list);
}
