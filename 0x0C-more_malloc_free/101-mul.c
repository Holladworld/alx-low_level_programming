#include "main.h"
#include <stdlib.h>
#include <stdio.h>


int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */

void _print(char *str, int l)
{
	int a, b;

	a = b = 0;
	while (a < l)
	{
		if (str[a] != '0')
			b = 1;
		if (b || a == l - 1)
			_putchar(str[a]);
		a++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int a, b, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (a = num_index, b = dest_index; a >= 0; a--, b--)
	{
		mul = (n - '0') * (num[a] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[b] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[b] = add % 10 + '0';
	}
	for (addrem += mulrem; b >= 0 && addrem; b--)
	{
		add = (dest[b] - '0') + addrem;
		addrem = add / 10;
		dest[b] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int a, b;

	for (a = 1; a < 3; a++)
	{
		for (b = 0; av[b][b]; b++)
		{
			if (av[a][b] < '0' || av[a][b] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string of integer
 * @str: sting to initialize integer
 * @l: length of string
 *
 * Return: void
 */
void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[i] = '\0';
}

/**
 * main - multiply two arguments
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, gi, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (gi = 0; e[gi]; gi++)
			_putchar(e[gi]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (gi = 0; e[gi]; gi++)
			_putchar(e[gi]);
		exit(98);
	}
	init(a, ln - 1);
	for (gi = l2 - 1, i = 0; gi >= 0; gi--, i++)
	{
		t = mul(argv[2][gi], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (gi = 0; e[gi]; gi++)
				_putchar(e[gi]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}
