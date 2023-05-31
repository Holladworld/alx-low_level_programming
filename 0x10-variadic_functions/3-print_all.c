#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_int(va_list arg);
void print_char(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_int - prints integers
 * @arg: List of arguments pointing to integers
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_char - prints character
 * @arg: List of argument pointing to character
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}
/**
 * print_float - prints floats num
 * @arg: list of argument pointing to float
 */
void print_float(va_list arg)
{
	float deci;

	deci = va_arg(arg, double);
	printf("%f", deci);
}
/**
 * print_string - print string
 * @arg: List of argument pointing to string
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - print all types of argument
 * @format: String of character representing argument types
 * @...: variable num of argument
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int a = 0, b = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"i", print_int},
		{"c", print_char},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + a)))
	{
		b = 0;

		while (b < 4 && (*(format + a) != *(funcs[b].symbol)))
			b++;

		if (b < 4)
		{
			printf("%s", separator);
			funcs[b].print(args);
			separator = ", ";
		}

		b++;
	}
	printf("\n");

	va_end(args);
}

