#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *array_range - creates an array of integers
 *@min: integer
 *@max: integer
 *Return: pointer to the newly created array f min > max, return NULL
 *If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(((max - min) + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
		array[i++] = min++;
	return (array);
}
