#include "holberton.h"
/**
 * times_table - multiplication table
 */
void times_table(void)
{
int column;
int row;
int prod;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
prod = (row * column);
if (column == 0)
{
_putchar('0' + prod);
}
else if (prod <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + prod);
}
else if (prod > 9)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (prod / 10));
_putchar('0' + (prod % 10));
}
}
_putchar('\n');
}
}
