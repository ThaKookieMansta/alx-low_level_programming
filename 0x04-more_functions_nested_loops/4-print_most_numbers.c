#include "main.h"
/**
 * print_most_numbers - Prints numbers from 0 to 9 excluding 2 and 4.
 * Description: Prints numbers from 0 to 9 excluding 2 and 4.
 * Return: No return, the function is void.
 */

void print_most_numbers(void)
{
	char n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
		{
			n++;
		}
		_putchar(n + '0');
	}
	_putchar('\n');
}
