#include <stdio.h>

/**
 * main - program that prints number of argument passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char __attribute((unused)) * argv[])
{
	int argument = --argc;

	printf("%d\n", argument);
	return (0);
}
