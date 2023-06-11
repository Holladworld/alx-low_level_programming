#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string to be search as input
 * @c: character to be serched as input
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int area;

	for (area = 0; s[area] >= '\0'; area++)
	{
		if (s[area] == c)
			return (s + area);
	}
	return ('\0');
}
