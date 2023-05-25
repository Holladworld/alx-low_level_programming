#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function.
 * @argc: the number of argument inputted to the program
 * @argv: array of pointer to argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, entry;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (entry = 0; entry < bytes; entry++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (entry == bytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");

	return (0);
}
