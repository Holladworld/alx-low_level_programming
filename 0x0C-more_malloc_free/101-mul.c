#include "main.h"

/**
 * main - multiplies two postive numbers
 * @argc: arguments
 * @argv: argument
 * Return: integr
 */
int main(int argc, char *argv[])
{
	unsigned long mult;
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > 57 || argv[a][b] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", mult);
	return (0);
}
