#include <stdlib.h>
#include "3-calc.h"

/**
 *get_op_func - selects the correct function to perform
 *the operation asked by the user.
 *@s: is the operator passed as argument to the program
 *Return: a pointer to the function that corresponds to
 *the operator given as a parameter
 * Example: get_op_func("+") should return a pointer to the function op_add
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
}
