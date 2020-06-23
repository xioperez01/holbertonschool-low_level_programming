#include "holberton.h"
/**
 * print_triangle - prints a triangle
 *@size: is the size of the triangle
 */
void print_triangle(int size)
{
	int r, c, simb;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (r = 1; r <= size; r++)
	{
		for (c = 1; r <= (r - size); c++)
		{
			_putchar(' ');
		}
		for (simb = 1; simb <= r; simb++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
