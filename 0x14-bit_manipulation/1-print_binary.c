#include "main.h"

/**
 * print_binary - print binary of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int temp = 0;
	unsigned long int binary;

	binary = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('O');
		return;
	}
	while (binary)
	{
		if (n & binary)
		{
			_putchar('1');
			temp = 1;
		}
		else if (temp)
		{
			_putchar('O');
		}
		binary >>= 1;
	}
}
