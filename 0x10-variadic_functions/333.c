#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_string(va_list arg);
void print_float(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - function to print char or character
 * @arg: list of arguments pointing to
 * the character(s) to be printed
 */
void print_char(va_list arg)
{
	char alphabet;

	alphabet = va_arg(arg, int);
	printf("%c", alphabet);
}

/**
 * print_int - function to print int or integer
 * @arg: list of arguments pointing to the integer to be
 * printed
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_string - function that print stings
 * @arg: list of arguments pointing to the strings to be printed
 */
void print_string(va_list arg)
{
	char *strings;

	strings = va_arg(arg, char *);

	if (strings == NULL)
	{
		printf("(nil)");
		return;
	}
}

/**
 * print_float - function that print floats
 * @arg: list of arguments pointing to the float to be printed
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_all - print anything, followed by new line
 * @format: string of characters representing the
 * argument type
 * @...: varible number of arguments to be printed
 *
 * Return: any argument not type char, int, float, string or
 * char* is ignored
 * if a string argument is NULL, print (nil)
 */
void print_all(const char * const format, ...)
{

