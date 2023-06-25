#include "3-calc.h"

/**
 * main - function that performs simple operation
 * @argc: num of argument
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("%d\n", get_op_func(argv[2])
				(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}

	printf("Error\n");
	return (98);

}
