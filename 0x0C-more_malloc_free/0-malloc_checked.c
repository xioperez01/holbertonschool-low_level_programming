#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *malloc_checked - allocates memory and exit
 *@b: size of the memory solicited
 *Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
