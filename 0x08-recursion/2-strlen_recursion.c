#include "main.h"

/**
 * _strlen_recursion - Recursive function to calculate length of string.
 * @s: The input sting
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
