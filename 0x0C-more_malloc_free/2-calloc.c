#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: number of elements
 *@size: bytes of elements
 *Return: a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return ('\0');

	p = malloc(size * nmemb);

	if (p == '\0')
		return ('\0');

	for (i = 0; i < nmemb * size; i++)
	{
		*(p + i) = 0;
	}
	return (p);
}
