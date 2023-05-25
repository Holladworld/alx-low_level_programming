#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - function to print a name
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);

}

