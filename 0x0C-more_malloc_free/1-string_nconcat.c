#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings using an inputted number of bytes
 * @s1: first sting
 * @s2: second string
 * @n: max number of byte of s2 to concatenate to s1
 * Return: Null if function fails or pointer to concat space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;
	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);
	len = 0;

	for (index = 0; s1[index]; index++)
		s[len++] = s2[index];

	s[len] = '\0';

	return (s);
}
