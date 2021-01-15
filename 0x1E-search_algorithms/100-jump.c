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

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += jump;
	}

	jump = i - jump;
	printf("Value found between indexes [%lu] and [%lu]\n", jump, i);

	while (jump <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);

		if (array[jump] == value)
			return (jump);

		jump++;
	}
	return (-1);
}
