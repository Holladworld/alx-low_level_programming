#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds two numbers
 * @argc: arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: 0 if no number is passed to the program
 * 1 if one of the number contains symbols that are not digits 
 *  print Error
 */

int main(int argc, char *argv[])
{
	int arg1 = 1;
	int arg2 = 0;
       	int addition = 0;


	
	 for (arg1 = 1; arg1 < argc; arg1++)
	 {
		for (arg2 = 0; argv[arg1][arg2]; arg2++)
		{
			if (argv[arg1][arg2] < '0' || argv[arg1][arg2] > '9')
                        {
                                printf("Error\n");
                                return (1);
                        }
			
		}
		addition += atoi(argv[arg1]);
	 }
	printf("%d\n", addition);
	return (0);
}

	

