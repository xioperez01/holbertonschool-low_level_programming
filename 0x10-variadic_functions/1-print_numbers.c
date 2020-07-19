#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - a function that prints numbers, followed by a new line.
 *@separator: is the string to be printed between numbers
 *@n:  is the number of integers passed to the function
 *Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list variable;
	unsigned int i = 0;

	va_start(variable, n);

	if (separator == NULL)
		return;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(variable, int));
			if (i != n)
				printf("%s", separator);
		}

		va_end(variable);
	}

	printf("\n");
}
