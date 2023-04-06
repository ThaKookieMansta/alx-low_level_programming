#include "main.h"

/**
 * get_bit - A function that returns the value of
 * a bit at a given index
 * @n: The number
 * @index: The index, starting from 0
 * Return: The value of the bit at index index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitMax = 0x01;

	bitMax <<= index;
	if (bitMax == 0)
	{
		return (-1);
	}

	if ((n & bitMax))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
