#include "holberton.h"
#include <stdio.h>

/**
 *main - prints its name, followed by a new line.
 *@argc: counter
 *@argv: String
 *Return: (0)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
