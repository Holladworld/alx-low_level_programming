#include "main.h"

/**
 * main - function that multipies two numbers
 * @argv: argument vector
 * @argc: the number of arguments
 * Return: error if arguments is incorrect
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (argv[num1][num2] > 57 || argv[num1][num2] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
