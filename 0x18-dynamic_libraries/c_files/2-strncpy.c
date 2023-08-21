#include "main.h"
/**
 * _strncpy - copy a string
 * @buff: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *buff, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		buff[j] = src[j];
		j++;
	}
	while (j < n)
	{
		buff[j] = '\0';
		j++;
	}

	return (buff);
}
