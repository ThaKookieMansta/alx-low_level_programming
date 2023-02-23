#include "main.h"
/**
 * print_diagonal - draws a diagonal line.
 * @n: This determines the length of the line.
 * Description: This function draws a diagonal line of a certain length.
 * Return: No return, the function is void.
 */

void print_diagonal(int n)
{
	int l;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}


	for (l = 0; l < n; l++)
	{
		for (s = 0; s < l; s++)
		{
			if (l == s)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}

		}
	}
}
