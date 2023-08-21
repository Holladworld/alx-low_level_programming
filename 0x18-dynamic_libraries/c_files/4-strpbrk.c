#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to be seacrhed as input
 * @accept: byte to be searched as input.
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int entry;

	while (*s)
	{
		for (entry = 0; accept[entry]; entry++)
		{
			if (*s == accept[entry])
				return (s);
		}
		s++;
	}
	return ('\0');
}
