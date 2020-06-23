#include "holberton.h"
/**
 * _isalpha - check c for alphabetic character
 * @c: - int to check for alpha
 *
 * Return: 1 if is alpha, if not return 0
 */
int _isalpha(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
else if (c <= 'Z' && c >= 'A')
{
return (1);
}
else
{
return (0);
}
}
