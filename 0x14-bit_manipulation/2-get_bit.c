#include "holberton.h"

/**
 *get_bit -  a function that returns the value of a bit at a given index.
 *@n: Number in base 2
 *@index: is the index of the bit you want to get
 *Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n >= index)
	{
		n = n >> index;
		index = (n & 1);
		return (index);
	}
	else
		return (-1);
}
