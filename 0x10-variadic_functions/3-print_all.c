#include "variadic_functions.h"

/**
 *print_all - a function that prints anything.
 *@format: is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list x;
	char *separator = ", ";
	int i = 0, j;

	formats_t op[] = {
		{"c", op_c},
		{"i", op_i},
		{"f", op_f},
		{"s", op_s},
		{NULL, NULL}
	};

	va_start(x, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (*(op[j].ar) == format[i])
			{
				op[j].f(x);
				if (format[i + 1])
				{
					printf("%s", separator);
				}
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(x);
}
/**
 *op_c - print a character
 *@p: argument
 */
void op_c(va_list p)
{
	printf("%c", (char)va_arg(p, int));
}

/**
 *op_i - print a integer
 *@p: argument
 */
void op_i(va_list p)
{
	printf("%d", va_arg(p, int));
}

/**
 *op_f - print a  float
 *@p: argument
 */
void op_f(va_list p)
{
	printf("%f", (float)va_arg(p, double));
}

/**
 *op_s - print a string
 *@p: argument
 */
void op_s(va_list p)
{
	char *container = va_arg(p, char*);

	switch ((int)(container == NULL))
	case 1:
	{
		container = ("nil");
	}

	printf("%s", container);
}
