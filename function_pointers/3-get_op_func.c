#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func- function to determine function used for math
 * @s: arguement passed to function
 * Return: pointer to correct math operation function
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

	int i;

	while (ops[i].op != NULL)
	{
		if (s == ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
