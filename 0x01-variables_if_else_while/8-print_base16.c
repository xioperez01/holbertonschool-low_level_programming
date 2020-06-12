#include <stdio.h>
/**
 *main - prints 0123456789abcdef in hexa base
 *Return: Always 0 (Success)
 */
int main(void)
{
int n = '0';
int a_f = 'a';
while (n <= '9')
{
putchar(n);
n++;
}
while (a_f <= 'f')
{
putchar(a_f);
<<<<<<< HEAD
a_f++;
=======
a_to_f++;
>>>>>>> ede5a30c88636c0f3bcbe5305eed28cfd5f3d07c
}
putchar('\n');
return (0);
}
