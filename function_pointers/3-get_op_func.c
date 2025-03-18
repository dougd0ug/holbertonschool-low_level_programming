#include <stdlib.h>
#include "3-calc.h"

/**
 * *get_op_func - have the good operator
 * @s: operator
 * Return: 99 or the good operator
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
	int i = 0;

	if (s != ops->op)
	{
		return (NULL);
	}

	while (i < 5 && s != ops[i].op)
	{
		i++;
	}
	return (ops[i].f);
}
