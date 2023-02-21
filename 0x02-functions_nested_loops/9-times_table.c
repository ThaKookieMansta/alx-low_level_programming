#include "main.h"
/**
 * times_table - prints the Multiplication table.
 * Description: prints the Multiplication table.
 * Return: prints the Multiplication table.
 */
void times_table(void)
{
	int l, w, val;

	for (l = 0; l < 10; l++)
	{
		for (w = 0; w < 10; w++)
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
