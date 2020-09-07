#include "holberton.h"
/**
 *_memset - fills memory with a constant byte.
 *@s:area pointed
 *@b:  constant byte
 *@n: fills the first n bytes of the memory area pointed to by s
 *Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
