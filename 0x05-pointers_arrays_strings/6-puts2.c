#include "holberton.h"
/**
 *_strlen - returns the length of a string.
 *@s: sting
 *Return: length
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

/**
* puts2 - prints every second character of a string
* @str: string
*/

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0' && a < _strlen(str); a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
