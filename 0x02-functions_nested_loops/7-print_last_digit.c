#include "holberton.h"
/**
 *print_last_digit - prints the last digit of inputted number
 * @n: int the last digit
 * Return: Returns last digit
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if (n >= 0)
{
n = n % 10;
}
else
{
last = -last;
}
_putchar(last + '0');
return (last);
}
