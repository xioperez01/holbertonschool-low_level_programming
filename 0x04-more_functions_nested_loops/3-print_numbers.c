#include "holberton.h"
/**
 *print_numbers - prints 0 to 9 and new line
 * Return: digit returns 1, if not returns 0
 */
void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
}
