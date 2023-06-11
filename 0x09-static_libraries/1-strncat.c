#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int p;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	p = 0;
	while (p < n && src[p] != '\0')
	{
	dest[a] = src[p];
	a++;
	p++;
	}
	dest[a] = '\0';
	return (dest);
}
