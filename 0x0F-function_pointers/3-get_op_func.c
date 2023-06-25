#include "3-calc.h"

/**
 * get_op_func - function that points to the correct function asked by user
 * @s: operator given by user
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"*", op_mul},
		{"%", op_mod},
		{NULL, NULL}
	};
	int arg = 0;

	while (ops[arg].op != NULL)
	{
		switch (*s)
		{
			case '+':
			case '-':
			case '/':
			case '*':
			case '%':
				if (s[1] == '\0')
				{
					return (ops[arg].f);
				}
				break;
		}
		arg++;
	}
	return (NULL);
}
