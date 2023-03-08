#include "main.h"
/**
 * my_sqrt_func - A function that returns the square root of a number.
 * @n: The number.
 * @m: The square root.
 * Return: The square root.
 */

int my_sqrt_func(int n, int m)
{
	if (m * m > n)
	{
		return (-1);
	}
	else if (m * m == n)
	{
		return (m);
	}
	else
	{
		return (my_sqrt_func(n, m + 1));
	}
}


/**
 * _sqrt_recursion - A function that returns the
 * natural square root of a number.
 * @n: The number.
 * Return: The natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (my_sqrt_func(n, 0));
	}
}
