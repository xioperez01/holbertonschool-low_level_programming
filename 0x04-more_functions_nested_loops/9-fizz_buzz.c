#include <stdio.h>

/**
 *main - prints from 1 to 100
 * % of 3 with Fizz,
 * % of 5 with Buzz
 * and % of 3 and % 5 with FizzBuzz
 *Return: cero
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
