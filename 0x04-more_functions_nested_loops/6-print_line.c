#include "main.h"
/**
 * print_line - draws a straight line.
 * @n: This determines the length of the line.
 * Description: This function draws a straigh line of a certain length.
 * Return: No return, the function is void.
 */

void print_line(int n)
{
	int l = 1;

	while (l <= n)
	{
		_putchar('_');
		l++;
	}
	_putchar('\n');
}
