#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: The number inputted.
 * Description: Checks whether the number is +ve or -ve.
 * Return: Returns 1 for +v, 0 for 0  and -1 for -ve.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
