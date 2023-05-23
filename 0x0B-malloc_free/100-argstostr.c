#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program into a string;
 * arguments are seprated by a new line in the string
 * @ac: the number of arguments passed of the program
 * @av: an array of pointers to the arguments
 *
 * Return: NULL if ac == 0 or av == NULL
 * a pointer to a new string, or NULL if it fails;
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, bytes, array, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (bytes = 0; av[arg][bytes]; bytes++)
			size++;
	}
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	array = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (bytes = 0; av[arg][bytes]; bytes++)
			str[array++] = av[arg][bytes];
		str[array++] = '\n';
	}
	str[size] = '\0';
	return (str);
}

