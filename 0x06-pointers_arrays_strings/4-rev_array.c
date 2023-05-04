#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @r: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *r, int n)
{
	int a;
	int b;

	for (a = 0; a < n--; a++)
	{
		b = r[a];
		r[a] = r[n];
		r[n] = b;
	}
}
