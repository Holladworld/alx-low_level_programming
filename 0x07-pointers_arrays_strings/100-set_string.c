#include "main.h"
/**
 * set_string - function that sets the value of
 * a pointer to a char.
 *
 * @s: the pointer pointing to pointer
 * @to: the char pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
