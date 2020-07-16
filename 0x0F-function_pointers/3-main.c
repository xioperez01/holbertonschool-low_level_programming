#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - The user enters 3 arguments;
 *two integers and an operator ...
 *performs the operation if it is valid and prints the result
 * @argc: counter
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
}
