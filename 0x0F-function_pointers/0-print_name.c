#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints name
 * @name: name to be printed
 * @f: pointer to the printing function print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{

	if (name && f)
	{
		f(name);
	}
}
