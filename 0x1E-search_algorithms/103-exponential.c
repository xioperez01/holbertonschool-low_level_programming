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
 * auxiliar_search - Binary search with four parameters
 * @array: Array to search in
 * @start: Lef
 * @end: Rigth
 * @value:Value to search for
 * Return: The first index where value is located or -1
 */

int auxiliar_search(int *array, int start, int end, int value)
{
	int mid = 0;

	if (start <= end)
	{
		mid = (start + (end - start) / 2);
		if (array[mid] == value)
		{
			print_array(array, start, end);
			return (mid);
		}
		if (array[mid] > value)
		{
			print_array(array, start - 1, end - 1);
			return (auxiliar_search(array, start, mid - 1, value));
		}
		print_array(array, start, end - 1);
		return (auxiliar_search(array, mid + 1, end, value));
	}
	return (-1);
}

/**
 * exponential_search - Function that searches for a value in a
 * sorted array of integers using the Exponential search algorithm
 * @array: Array to search in
 * @size: Size of array
 * @value: Value to search for
 * Return: The first index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	int i = 1, n = size - 1;
	int index = 0;

	while (i < n)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] < value)
			i = i * 2;
		else
			break;
	}

	if (i > n)
		printf("Value found between indexes [%d] and [%d]\n", i / 2, n);
	else
	{
		printf("Value found between indexes [%d] and [%d]\n", i / 2, i);
		index = auxiliar_search(array, (i / 2), i, value);
		return (index);
	}
	return (-1);
}
