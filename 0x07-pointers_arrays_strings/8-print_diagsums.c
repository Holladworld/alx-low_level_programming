#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum two diagonal
 * of a square matrix of integers.
 * @a: input, 2d array of chars
 * @size: input, number matrix
 * Return: 0
 */
void print_diagsums(in *a, int size)
{
	/*Declaring the variables*/
	int q;
	int sum_1, sum_2;

	sum_1 = 0;
	sum_2 = 0;

	q = 0;
	while (i < size) /*number repetitions*/
	{
		/*sum for diagsums*/
		sum_1 = sum_1 + *(a + q * size + q);
		sum_2 = sum_2 + *(a + q * size + size - q - 1);

		q++;

	}
	printf("%i, %i\n", sum_1, sum_2);
}
