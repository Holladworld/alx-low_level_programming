#include <unistd.h>

/**
 * _putchar - Write character c to stdio
 * @c: character to be printed
 *
 * Return: on sucess 1
 * on error, -1 and errno is set approriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
