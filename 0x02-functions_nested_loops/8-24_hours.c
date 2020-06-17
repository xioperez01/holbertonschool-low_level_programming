#include "holberton.h"
/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */
void jack_bauer(void)
{
int hour = 0;
int min = 0;
while (hour < 24)
{
while (min < 60)
{
_putchar('0' + (hour / 10));
_putchar('0' + (hour % 10));
_putchar(':');
_putchar('0' + (min / 10));
_putchar('0' + (min % 10));
_putchar('\n');
min++;
}
min = 0;
hour++;
}
}
