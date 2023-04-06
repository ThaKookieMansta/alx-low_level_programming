

/**
 * set_bit - A function that sets the value of a bit
 * to 1 at a given index.
 * @n: The number 
 * @index: The index to set the bit
 * Return: 1 if it worked, or -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitMax = 0x01;

	bitMax <<= index;
	if (bitMax == 0)
	{
		return (-1);
	}
	*n |= bitMax;
	return (1);
}
