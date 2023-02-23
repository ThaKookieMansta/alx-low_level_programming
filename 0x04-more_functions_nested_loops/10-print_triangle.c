#include "main.h"
/**
 * print_square - draws a square.
 * @size: This determines the size of the square.
 * Description: This function draws a square of a certain size.
 * Return: No return, the function is void.
 */

void print_triangle(int size)
{
	int l = 1;
	int s, n = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (l <= size)
	{
		for (s = 0; s < size; s++)
		{
			if (s < n)
			{
				_putchar(' ');
			}
			else
			{
			_putchar('#');
			}
		}
		_putchar('\n');
		l++;
		n--;
	}
}