#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 * @argv: array that contain arguments
 * @argc: number of arguments; count.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int m, n, sum = 0;

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n] != '\0'; n++)
		{
			if (!isdigit(argv[m][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[m]);
	}
	printf("%d\n", sum);
	return (0);
}
