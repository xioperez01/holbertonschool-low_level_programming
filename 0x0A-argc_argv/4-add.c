#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - adds positive number
 *@argc: argument counter
 *@argv: arguments
 *Return: f one of the number contains symbols that are not digits 1 else 0
 */

int main(int argc, char *argv[])
{
	int i, tot;
	int j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}

			tot = tot + atoi(argv[i]);
		}

	}
	else
	{
		printf("0\n");
		return (0);
	}

	printf("%i\n", tot);
	return (0);
}
