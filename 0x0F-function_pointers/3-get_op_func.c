#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Get the function for a given operator symbol.
 * @s: Pointer of char to an operator symbol from the program.
 *
 * Return: One of the op to perform calculation, or NULL if no match is found.
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

	i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
