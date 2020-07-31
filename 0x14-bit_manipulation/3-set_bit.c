#include <stdio.h>
#define MAX_LEN (sizeof(long int) * 8)

/**
 *set_bit - a function that sets the value of a bit to 1 at a given index.
 *@n: Number in base 2
 *@index: is the index of the bit you want to set
 *Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n && index <= MAX_LEN)
	{
		*n |= 1 << (index);
		return (1);
	}
	return (-1);
}
