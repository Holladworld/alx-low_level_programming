#include <stdio.h>

/*
 * main - Prints the name of the file of where this program
 * is compile from, follow by new line
 * Return: 0
 */

int main(void)

{
	printf("%s\n", __FILE__);

	return (0);
}
