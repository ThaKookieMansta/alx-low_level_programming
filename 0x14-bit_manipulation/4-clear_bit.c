

/**
 * clear_bit - A function that sets the value of a bit to 0
 * at a given index.
 * @n: The number 
 * @index: The index where to set bit starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitMax = 0x01;

	bitMax = ~(bitMax << index);
	if (bitMax == 0x00)
	{
		return (-1);
	}
	*n &= bitMax;
	return (1);
}
