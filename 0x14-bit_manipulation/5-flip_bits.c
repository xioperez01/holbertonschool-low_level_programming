#include "holberton.h"

/**
 * flip_bits - a function that returns the number of bits you would
 *need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, count = 0;

	result = n ^ m;

	while (result > 0)
	{
		if ((result & 1) == 1)
			count++;

		result = result >> 1;
	}
	return (count);
}
