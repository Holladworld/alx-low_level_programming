#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @r: array name
 * @n: is the number of elements of the array to be printed
 * Return: r and n inputs
 */
void print_array(int *r, int n)
{
	int a;

	for (a = 0; a < (n - 1); a++)
	{
		printf("%d, ", r[a]);
	}
		if (a == (n - 1))
		{
			printf("%d", r[n - 1]);
		}
			printf("\n");
}
