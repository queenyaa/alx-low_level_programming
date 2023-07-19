#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selecs correct function to perform
 * @s: operator as an argument
 *
 * Return: pointer to function
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

	int r = 0;

	while (ops[r].op != NULL)
	{
		if (*ops[r].op == *s && *(s + 1) == '\0')
			return (ops[r].f);
		r++;
	}
	return (NULL);
}
