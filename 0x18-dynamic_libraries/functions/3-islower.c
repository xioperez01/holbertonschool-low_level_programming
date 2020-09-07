#include "holberton.h"
/**
 * _islower - check if is a lowercase letter
 *
 * @c: character to check for lowercase
 * Return: Lowercase number returns 1, if not returns 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
