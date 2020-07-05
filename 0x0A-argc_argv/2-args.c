#include <stdio.h>
#include "holberton.h"

/**
 * main - prints all arguments it receives
 * @argc: counter
 * @argv: array
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
