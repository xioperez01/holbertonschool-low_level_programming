#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print sums of the two diagonals in square matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int diagonal1 = 0;
	int diagonal2 = 0;
	int r, i;

	for (r = 0; r < size; r++)
	{
		i = (r * size) + r;
		diagonal1 += a[i];
	}

	for (r = 1; r <= size; r++)
	{
		i = (r * size) - r;
		diagonal2 += a[i];
	}

	printf("%d, %d\n", diagonal1, diagonal2);
}
