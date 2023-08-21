#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @needle: the substring to be located as input.
 * @haystack: the string to be search for as input.
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int entry;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		entry = 0;
		if (haystack[entry] == needle[entry])
		{
			do {
				if (needle[entry + 1] == '\0')
					return (haystack);
				entry++;
			} while (haystack[entry] == needle[entry]);
		}
		haystack++;
	}
	return ('\0');
}
