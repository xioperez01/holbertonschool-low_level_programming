#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: = columns
 * @height: = rows
 * Return:  pointer 2d array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array2d;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	array2d = malloc(sizeof(int) * height);

	if (array2d == '\0')
	{
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		array2d[i] = malloc(sizeof(int) * width);
		if (array2d[i] == '\0')
		{
			return ('\0');
		}
		for (j = 0; j < width; j++)
		{
			array2d[i][j] = 0;
		}
	}

	return (array2d);
}
