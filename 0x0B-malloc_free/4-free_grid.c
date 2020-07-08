#include <stdlib.h>
#include <stdio.h>

/**
 *free_grid - function that frees a 2 dimensional grid previously
 *created by your alloc_grid function.
 *@grid: 2 dimensional grid
 *@height: height
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == '\0')
	{
		free(grid);
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
