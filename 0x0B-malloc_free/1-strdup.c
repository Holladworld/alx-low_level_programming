#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a new allocated space in memory
 * @str: string to be copied
 * Return: ponter of array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int entry, len;

	if (str == NULL)
		return (NULL);

	for (entry = 0; str[entry]; entry++)
		len++;

	strout = malloc(sizeof(char) * (len + 1));

	if (strout == NULL)
		return (NULL);

	for (entry = 0; str[entry]; entry++)
		strout[entry] = str[entry];
	strout[len] = '\0';

	return (strout);
}
