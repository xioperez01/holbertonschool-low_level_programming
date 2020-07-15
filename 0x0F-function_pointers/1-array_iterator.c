#include <stdio.h>
#include "function_pointers.h"

/**
*array_iterator - a function that executes a function given as a parameter
*on each element of an array.
*@array: array
*@size: size of array. This size is type size_t
*@action: is a pointer to the function you need to use
*Return: Void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
