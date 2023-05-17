#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest:where memory area is stored
 *@src: memory where is copied
 *@n: length of src
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int o = n;

	for (; m < o; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}

