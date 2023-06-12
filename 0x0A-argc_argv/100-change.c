#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to
 * make change for an amount of money
 * @argc: gargument passed to command line.
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, money;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{

		if ((cents - 25) >= 0)
		{
			cents -= 25;
		}
		else if ((cents - 10) >= 0)
		{
			cents -= 10;
		}
		else if ((cents - 5) >= 0)
		{
			cents -= 5;
		}
		else if ((cents - 2) >= 0)
		{
			cents -= 2;
		}
		else if ((cents - 1) >= 0)
		{
			cents -= 1;
		}
		money++;
	}
	printf("%d\n", money);
	return (0);
}
