#include "search_algos.h"

/**
 * jump_search - Function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: Array to search in
 * @size: Size of array
 * @value: Value to search for
 * Return: The first index where value is located or -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t jump = sqrt(size);
	size_t j = jump;

	if (!array)
		return (-1);

	while (array[i] < value && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i = j;
		j += jump;
	}

	if (i != 0)
	{
		i -= jump;
		j -= jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i, j);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

		i++;
	}
	return (-1);
}
