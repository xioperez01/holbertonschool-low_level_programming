#include <stdio.h>
/**
 *main - prints 0123456789abcdef hexa base
 *Return: Always 0 (Success)
 */
int main(void)
{
int n = '0';
int a_to_f = 'a';
while (n <= '9')
{
putchar(n);
n++;
}
while (a_to_f <= 'f')
{
putchar(a_to_f);
a_to_f++;
}
putchar('\n');
return (0);
}
