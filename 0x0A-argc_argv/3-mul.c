#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main -print  multiplies two numbers.
 *@argc: counter
 *@argv: array (numbes to multiply)
 *Return: if the program does not receive two arguments return 1, else return 0
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
			return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
