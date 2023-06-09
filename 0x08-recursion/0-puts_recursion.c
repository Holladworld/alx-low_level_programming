#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: pointer to char in a string
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0') /* base code */
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');

	}
}
