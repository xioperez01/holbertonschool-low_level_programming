#include <stdio.h>
#define MAX_LEN (sizeof(long int) * 8)

/**
 *clear_bit - a function that sets the value of a bit to 0 at a given index.
 *@n: pointer to number in base 2
 *@index: is the index of the bit you want to set
 *Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index <= MAX_LEN)
	{
		mask = ~(mask << index);
		*n = (*n & mask);
		return (1);
	}
	else
		return (-1);
}
