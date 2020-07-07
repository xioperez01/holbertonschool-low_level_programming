#include <stdio.h>
#include <stdlib.h>

/**
*create_array - function that creates an array of chars,
*and initializes it with a specific char.
*@size: size of array
*@c: array
*Return: NULL if size = 0, a pointer to the array,
*or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return ('\0');
	}

	arr = malloc(sizeof(char) * size);

	if (arr == ('\0'))
	{
		return ('\0');
	}

	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;

	}
	return (arr);
}
