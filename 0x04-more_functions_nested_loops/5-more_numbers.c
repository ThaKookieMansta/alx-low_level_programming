#include "main.h"
/**
 * more_numbers - Prints numbers from 0 to 14.
 * Description: Prints numbers from 0 to 14.
 * Return: No return, the function is void.
 */

void more_numbers(void)
{
	int l = 0;
	int n;

	while (l < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');

		}
		_putchar('\n');
		l++;
	}

}
