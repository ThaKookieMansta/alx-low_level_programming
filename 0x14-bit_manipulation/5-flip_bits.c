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
	unsigned long int bitMax = 0x01;

	while (bitMax <= x)
	{
		if (bitMax & x)
			flips++;
		bitMax <<= 1;
	}
	return (flips);
}
