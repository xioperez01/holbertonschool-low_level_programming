#include "holberton.h"
/**
 *_strlen - returns the length of a string.
 *@s: sting
 *Return: length
 *
 *rev_string - reverses a string
 *@s: string to reverse
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}



void rev_string(char *s)
{
	int a = 0;
	int b = (_strlen(s) - 1);
	char change;

	while (a < b)
	{
		change = s[a];
		s[a] = s[b];
		s[b] = change;
		a++, b--;
	}
}
