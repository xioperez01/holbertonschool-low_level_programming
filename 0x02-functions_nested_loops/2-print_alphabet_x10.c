#include "holberton.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Description: Uses a nested loop to print 10 times alphabet
 *
 */
void print_alphabet_x10(void)
{
int b;
for (b = 0; b < 10; b++)
{
int a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
