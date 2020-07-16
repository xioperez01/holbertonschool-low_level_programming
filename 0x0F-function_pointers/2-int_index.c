#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - a function that searches for an integer.
 *@array: array of integers
 *@size: size of array
 *@cmp:  is a pointer to the function to be used to compare values
 *Return: returns the index of the first element for which the cmp function
 *If no element matches, return -1
 *If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)))
				return (i);
		}
	}
	return (-1);
}
