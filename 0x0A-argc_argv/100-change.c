#include <stdio.h>
#include <stdlib.h>

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
