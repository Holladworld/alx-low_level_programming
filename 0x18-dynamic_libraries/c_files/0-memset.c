#include "main.h"
/**
 * memset - fills memory with constant byte.
 * @s: pointer to put the constant
 * @b: constant ( the desired value)
 * @n: max bytes to use i.e the number of bytes to be changed
 * Return: changed array with the new value(constant) for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
