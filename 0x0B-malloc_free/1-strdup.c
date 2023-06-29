#include "main.h"

/**
 * _strdup - function to duplicate string using malloc
 * @str: string to be duplicated
 * Return: pointer to the new duplicated string
 */
char *_strdup(char *str)
{
	char *pointToDup;
	int old, new;

	if (!str)
	{
		return (NULL);
	}
	for (old = 0; str[old] != '\0'; old++)
		;

	pointToDup = malloc(old * sizeof(*pointToDup) + 1);

	if (!pointToDup)
	{
		return (NULL);
	}
	for (new = 0; new < old; new++)
	{
		pointToDup[new] = str[new];
	}
	pointToDup[new] = '\0';
	return (pointToDup);
}
