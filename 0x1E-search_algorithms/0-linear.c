#include "search_algos.h"
/**
 * linear_search - a function that searches for a value
 * in an array of integers using the Linear search algorithm
 * @array: Array to search in
 * @size: Size of array
 * @value: Value to search for
 * Return: The first index where value is located or -1
*/

int linear_search(int *array, size_t size, int value)
{
  size_t i;
  int search;

    if (!array)
        return (-1);

    for (i = 0; i < size; i++)
    {
        search =  array[i];
        printf("Value checked array[%d] = [%d]\n", (int)i, search);
        if (search == value)
            return (i);
    }

    return (-1);
}
