#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func -  function that selects the correct function to perform
 * by the operation asked by the user
 * @s:  operator passed as argument to the program
 * Return: NULL, if s does not match any of the 5 expected operators
 * (+, -, *, /, %)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int h = 0;

	while (ops[h].op != NULL && *(ops[h].op) !=*s)
		h++;

	return (ops[h].f);
}