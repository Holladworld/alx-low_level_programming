#include <stdio.h>
/**
 * main - program that prints all arguments passed to it
 * @argv: argument vector or array
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arguments;

	for (arguments = 0; arguments < argc; arguments++)
	{
		printf("%s\n", argv[arguments]);
	}
	return (0);
}
