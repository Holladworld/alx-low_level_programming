#include "main.h"
/**
 * *argstostr - function that concatenate arguments
 * @ac: argument
 * @av: argument vector
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *charArray;
	int u, v, w, x;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (u = v = 0; v < ac; v++)
	{
		if (av[v] == NULL)
		{
			return (NULL);
		}
		for (w = 0; av[v][w] != '\0'; w++)
		{
			u++;
		}
		u++;
	}
	charArray = malloc((u + 1) * sizeof(char));
	if (!charArray)
	{
		free(charArray);
		return (NULL);
	}
	for (v = w = x = 0; x < u ; w++, x++)
	{
		if (av[v][w] == '\0')
		{
			charArray[x] = '\n';
			v++;
			x++;
			w = 0;
		}
		if (x < u - 1)
			charArray[x] = av[v][w];
	}
	charArray[x] = '\0';

	return (charArray);
}
