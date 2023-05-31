#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
/**
 * _print - moves strings from one place to the left and prints the string
 * @str: string to be moved
 * @l: size of string
 * Return: 0 if a non digit is found, otherwise 1
 */
void _print(char *str, int l)
{
	int x, y;

	x = y = 0;
	while (x < 1)
	{
		if (str[x] != '0')
			x = 1;
		if (x || y == l - 1)
			_putchar(str[x]);
		y++;

	}
	_putchar('\n');
	free(str);
}
/**
 * mul - multiply a char with a string and place the answer in dest
 * @n: char to be multiplied
 * @num: string to be multiplied
 * @num_index: last non NULL index of number
 * @dest: destination of multiplication
 * @dest_index: higest indext to start addition
 * Return: pointer to dest or NULL if failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int x, y, mul, mulrem, add, addrem;

	mulrem = addrem = 0;

	for (x = num_index, y = dest_index; x >= 0; x--, y--)
	{
		mul = (n - '0') * (num[x] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[y] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[y] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * check_for_digits - check arguments to ensure they are digits
 * @av: pointer to the arguments
 * Return: 0 if digits and 1 if not
 */
int check_for_digits(char **av)
{
	int x, y;

	for (x = 1; x < 3; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			if (av[x][y] < '0' || av[x][y] > '9')
				return (1);
		}
	}
	return (0);
}
/**
 * init - initializes a string
 * @str: string to be intialized
 * @l: lenght og string
 * Return: void
 */
void init(char *str, int l)
{
	int x;

	for (x = 0; x < l; x++)
		str[x] = '\0';
}
/**
 * main - multiply two numbers
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0, or exit status 98 if failure
 */
int main(int argc, char *argv[])
{
	int x1, x2, ln, hi, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (hi = 0; e[hi]; hi++)
			_putchar(e[hi]);
		exit(98);

	}
	for (x1 = 0; argv[1][x1]; x1++)
		;
	for (x2 = 0; argv[2][x2]; x2++)
		;
	ln = x1 + x2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (hi = 0; e[hi]; hi++)
			_putchar(e[hi]);
		exit(98);
	}
	init(a, ln - 1);
	for (hi = x2 - 1, i = 0; hi >= 0; hi--, i++)
	{
		t = mul(argv[2][hi], argv[1], x1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (t = 0; e[hi]; hi++)
				_putchar(e[hi]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}
