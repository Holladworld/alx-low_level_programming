#include "main.h"
/**
 * *str_concat - function to concatenate two strings unsing malloc
 * @s1: first string
 * @s2: secont string
 * Return: pointer to the strings
 */
char *str_concat(char *s1, char *s2)
{

	int a, b, u, v;
	char *pointerTo;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	pointerTo = malloc((a * sizeof(*s1)) + (b * sizeof(*s2)) + 1);
	if (!pointerTo)
	{
		return (NULL);
	}
	for (u = 0, v = 0; u < (a + b + 1); u++)
	{
		if (u < a)
		{
			pointerTo[u] = s1[u];
		}
		else
		{
			pointerTo[u] = s2[v++];
		}
	}

		return (pointerTo);
}
