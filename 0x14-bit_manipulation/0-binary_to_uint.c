#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned integer
 * @b: pointer to char 1 and 0
 * Return: converted number or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_num = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (!isdigit(*b) || (*b != '0' && *b != '1'))
			return (0);

		converted_num = (converted_num << 1) | (*b - '0');
		b++;
	}

	return (converted_num);
}
