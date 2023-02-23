#include "main.h"
/**
 * print_diagonal - draws a diagonal line.
 * @n: This determines the length of the line.
 * Description: This function draws a diagonal line of a certain length.
 * Return: No return, the function is void.
 */

void print_diagonal(int n)
{
	int l = 1;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		while (l <= n)
		{

			for (s = 0; s < l; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			l++;
	}	}
}
