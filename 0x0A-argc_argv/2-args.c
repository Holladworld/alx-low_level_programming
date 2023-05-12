#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int h;

	for (h = 0; h < argc; h++)
	{
		printf("%s\n", argv[h]);
	}
	return (0);
}
