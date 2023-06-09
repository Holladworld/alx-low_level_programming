#include "main.h"
/**
 * wildcmp - function to compare 2 strings
 * @s2: pointer to second string. it can contain * as special character
 * @s1: pointer to first string
 * Return: 1 if strings are identical, else return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '*' && *s2 != '\0')
		{
		return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}
