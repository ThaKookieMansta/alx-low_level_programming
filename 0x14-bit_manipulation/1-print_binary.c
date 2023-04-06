#include "main.h"

/**
 * print_binary - A function that prints the binary
 * representation of a number
 * @n: The integer to be printed in binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int maxBinary = 32768, point = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (maxBinary)
	{
		if (point == 1 && (n & maxBinary) == 0)
		{
			_putchar('0');
		}
		else if ((n & maxBinary) != 0)
		{
			_putchar('1');
			point = 1;
		}
		maxBinary >>= 1;
	}
}
