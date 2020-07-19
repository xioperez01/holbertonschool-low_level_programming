#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - a function that returns the sum of all its parameters.
 *@n: number of arguments
 *Return: the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list variable;
	unsigned int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(variable, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(variable, int);
	}

	va_end(variable);

	return (sum);
}
