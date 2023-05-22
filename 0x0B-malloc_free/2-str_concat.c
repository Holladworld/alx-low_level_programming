#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: one of the  strings to be concatenated
 * @s2: one of the strings to be concatenated
 *
 * Return: concatenation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int entry, concat_string = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	for (entry = 0; s1[entry] || s2[entry]; entry++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (entry = 0; s1[entry]; entry++)
		concat_str[concat_string++] = s1[entry];

	for (entry = 0; s2[entry]; entry++)
		concat_str[concat_string++] = s2[entry];

	return (concat_str);
}
