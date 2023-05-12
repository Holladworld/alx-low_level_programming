#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argv: array that contains command line arguments.
 * @argc: number of the command line arguments.
 * Return: (0)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1); /*print a number, followed by a new line*/
	return (0);
}
