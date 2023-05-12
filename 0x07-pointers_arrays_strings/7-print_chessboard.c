#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: array, the chessboard to be printed
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int index1a;
	int index2b;

	for (index1a = 0; index1a < 8; index1a++)
	{
		for (index2b = 0; index2b < 8; index2b++)
		_putchar(a[index1a][index2b]);
		_putchar('\n');
	}
}
