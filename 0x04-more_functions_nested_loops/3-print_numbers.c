#include "main.h"
/**
 * print_numbers - Prints numbers from 0 to 9.
 * Description: Prints numbers from 0 to 9.
 * Return: No return, the function is void.
 */

void print_numbers(void)
{
	char n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
