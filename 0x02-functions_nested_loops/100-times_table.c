#include "main.h"
/**
 * print_times_table - prints the Multiplication of a specific size.
 * @n:This determines the size
 */
void print_times_table(int n)
{
	int l, w, val;

	if (n >= 0 && n <= 15)
	{
		for (l = 0; l < (n + 1); l++)
		{
			for (w = 0; w < (n + 1); w++)
			{
				val = l * w;
				if (w == 0)
				{
					_putchar(val + '0');
				}
				else if (val < 10 && w != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(val +'0');
				}
				else if (val >= 10 && val < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((val / 10) + '0');
					_putchar((val % 10) + '0');
				}
				else if (val >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((val / 100) + '0');
					_putchar(((val / 10) % 10) + '0');
					_putchar((val % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
