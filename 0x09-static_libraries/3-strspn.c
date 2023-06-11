#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string to be searched for as input
 * @accept: the prefix to be measured as input.
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int area;

	while (*s)
	{
		for (area = 0; accept[area]; area++)
		{
		if (*s == accept[area])
		{
		byte++;
		break;
		}
		else if (accept[area + 1] == '\0')
		return (byte);
		}
	s++;
	}
	return (byte);
}
