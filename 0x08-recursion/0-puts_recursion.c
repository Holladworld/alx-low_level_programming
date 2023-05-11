#include "main.h"

/**
 * _puts_recursion - Function that prints a string, followed by a new line
 * @s: String to be printed
 * Return: Always 0.
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*(s + 0));
		_puts_recursion((s + 1));
	}
	else
	{
		_putchar('\n');
		return;
	}


}
