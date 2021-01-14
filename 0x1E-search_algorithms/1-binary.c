#include "search_algos.h"

/**
 * print_array - print array
 * @array: array
 * @l: left index
 * @r: right index
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - function that searches for a
 * value in a sorted array of integers using the Binary search algorithm
 * @array: Array to search in
 * @size: Size of array
 * @value: Value to search for
 * Return: The first index where value is located or -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0;
	size_t l = 0;
	size_t r = size - 1;

	if (!array)
		return (-1);

	while (l <= r)
	{
		print_array(array, l, r);
		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
