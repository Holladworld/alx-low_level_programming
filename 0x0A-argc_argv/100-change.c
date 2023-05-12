#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * change - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @cent: money amount
 * Return: number of coin.
 */
int change(int cent)
{
	int coinage, nickel, shilling, dollar, pond, penny;

	coinage = 0;
	nickel = 0;
	shilling = 0;
	dollar = 0;
	pond = 0;
	penny = 0;

	while (cent > 0)
	{
		if (cent >= 25)
		{
			cent -= 25;
			nickel += 1;
		}
		else if (cent >= 10)
		{
			cent -= 10;
			shilling += 1;
		}
		else if (cent >= 5)
		{
			cent -= 5;
			dollar += 1;
		}
		else if (cent >= 2)
		{
			cent -= 2;
			pond += 1;
		}
		else
		{
			cent -= 1;
			penny += 1;
		}
	}
	coinage = nickel + shilling + dollar + pond + penny;
	return (coinage);
}

/**
 * main - prints minimum number of coins to get change
 * @argv: array of arguments
 * @argc: number of arguments or count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int coinage;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		coinage = change(atoi(argv[1]));
		printf("%d\n", coinage);
	}
return (0);
}

