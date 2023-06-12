#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the multiplications of two numbers
 * @argc: the number supplied
 * @argv: pointer to the argument
 * Return: 0 if number received two arguments
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, product;

	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	product = arg1 * arg2;

	printf("%i\n", product);
	return (0);
}
