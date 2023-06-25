#include <stdio.h>
#include <stdlib.h>
/**
  * main - program that prints the opcodes of its own main function
  * @argc: number of argument
  * @argv: array
  *
  * Return: always 0.
  */
int main(int argc, char *argv[])
{


	int bytes, entry;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	entry = atoi(argv[1]);

	if (entry < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (bytes = 0; bytes < entry; bytes++)
	{
		printf("%02x", ((unsigned char *)main)[bytes]);
		printf("%c", bytes < entry - 1 ? ' ' : '\n');
	}

	return (0);
}

