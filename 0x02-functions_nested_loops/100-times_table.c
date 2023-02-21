#include "main.h"
/**
 * print_times_table - prints the Multiplication of a specific size.
 * @n:This determines the size
 * Description: prints the Multiplication table.
 * Return: prints the Multiplication table.
 */
void print_times_table(int n)
{
	int l, w, val;

	if (n > 15 || n < 0)
	{
		_putchar('\n');
	}

	else
	{

		for (l = 0; l < (n + 1); l++)
		{
			for (w = 0; w < (n + 1); w++)
			{
				val = l * w;

				if ((val / 10) == 0)
				{
					if (w != 0)
					{
						_putchar(' ');
					}
					_putchar(val + '0');

					if (w == 9)
					{
						continue;
					}

					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((val / 10) + '0');
					_putchar((val % 10) + '0');
					if (w == 9)
					{
						continue;
					}
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
