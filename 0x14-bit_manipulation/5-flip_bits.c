#include "main.h"

/**
 * flip_bits - A function that returns the number of
 * bits you would need to flip to get from one number to another
 * @n: The number of bits needed to flip
 * @m: The number to set other equal
 * Return: The number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int x = (n ^ m);

	while (x > 0)
	{
		flips += (x & 1);
		x >>= 1;
	}
	return (flips);
}
