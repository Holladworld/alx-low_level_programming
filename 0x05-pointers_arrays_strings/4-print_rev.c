#include "main.h"
/**
 * print_rev - imprime en reversa
 * @str: string
 * return: 0
 */
void print_rev(char *str)
{
	int len = 0;
	int s;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	s--;
	for (s = len; s > 0; s--)
	{
		_putchar(*str);
		str--;
	}

	_putchar('\n');
}
