#include "holberton.h"
/**
 * _isupper - check if is a lowercase letter
 *
 * @c: character to check for uppercase
 * Return: uppercase number returns 1, if not returns 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
