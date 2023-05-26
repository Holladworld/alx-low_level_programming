#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * file: variadic_functions.h
 * desc: header  file containing  prototypes for all functions
 * used in the directory
 * 0x10-variadic_function directory
 */

#include <stdarg.h>
#include <stdio.h>
/*struct printer - A new struct type defining a printer
 * @symbol: represent data type
 * @print: point to a function thar prints a data type corresponding to symbol
 */
typedef struct printer
{
	char *symbol;
	void(*print)(va_list arg);

} printer_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
