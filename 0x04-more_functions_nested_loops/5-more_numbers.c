#include "holberton.h"

/**
 * more_numbers - print from 0 to 14 ten times
 */

void more_numbers(void)
{
	int a;
	char b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b / 10 > 0)
				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
