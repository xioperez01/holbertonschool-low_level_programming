#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of coins to make change
 *for an amount of money.
 *@argc: counter argument
 *@argv: argument
 *Return: if the number of arguments passed to your program is not exactly
 *else 0
 */

int main(int argc, char *argv[])
{
	int num;
	int i = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	while (num > 0)
	{
		if (num >= 25)
			num -= 25;

		if (num >= 10)
			num -= 10;

		if (num >= 5)
			num -= 5;

		if (num >= 2)
			num -= 2;

		if (num >= 1)
			num -= 1;
		i += 1;
	}
	printf ("%d\n", i);
	return 0;
}
