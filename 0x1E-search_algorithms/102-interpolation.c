#include "search_algos.h"

/**
 * interpolation_search - Function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: Array to search in
 * @size: Size of array
 * @value: Value to search for
 * Return: The first index where value is located or -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;
	size_t pos = 0;
	int comparisions = 1, index = 0;

	while (low <= high)
	{
		comparisions++;
		/* Probe the pos point */
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));

		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		/* Value found */
		if (array[pos] == value)
		{
			index = pos;
			return (index);
		}
		else
		{
			if (array[pos] < value)
				low = pos + 1;
			else
				high = pos - 1;
		}
	}
	return (-1);
}
