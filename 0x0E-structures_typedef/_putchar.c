#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: character to print
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

