#include "holberton.h"
/**
 *_strncat - concatenates two strings
 *@src: string to add to
 *@dest: string destino
 *@n: n number of bytes
 *Return: resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0'; i++)
		while (src[j] != src[n])
		{
			dest[i] = src[i];
			i++;
			j++;
		}
		dest[i] = '\0';

	return (dest);
}
