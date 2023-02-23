#include "main.h"
/**
 * print_number - This function prints a number.
 * @n: This is the number to be printed.
 * Description: This function prints a number.
 * Return: No return, the function is void.
 */


void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}

	if ((i / 10) > 0)
		print_number(i / 10);

	_putchar((i % 10) + '0');

}
