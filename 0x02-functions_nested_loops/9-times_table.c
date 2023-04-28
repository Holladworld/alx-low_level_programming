#include "main.h"
/**
 * times_table -print the 9 times table, starting with 0
 */
void times_table(void)
{
	int i;

	printf("9 times table starting from 0:\n");
	for (i = 0; i <= 10; i++)
	{
		printf("9 x %d = %d\n", i, i * 9);
	}
}

