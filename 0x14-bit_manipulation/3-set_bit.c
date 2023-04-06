#include "main.h"

/**
 * set_bit - A function that sets the value of a bit
 * to 1 at a given index.
 * @n: The number
 * @index: The index to set the bit
 * Return: 1 if it worked, or -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitMax = sizeof(unsigned long int) * 8;


	if (index >= bitMax)
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
