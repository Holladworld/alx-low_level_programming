#include "main.h"
/**
 * times_table -print the 9 times table, starting with 0
 */
void times_table(void)
{
	int a, b, d;

	for (a = 0; b < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			d = a * b;
			if (b == 0)
			{
				_putchar(d + '0');
			}

			if (d < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(d + '0');
			}
			else if (d >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
	}
			_putchar('\n');
	}
	}
}
