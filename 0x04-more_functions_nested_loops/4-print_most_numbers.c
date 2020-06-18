#include "holberton.h"
/**
 * print_most_numbers - prints from 0 to 9 whitout 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
			n++;
		}
	}
	_putchar('\n');
}
