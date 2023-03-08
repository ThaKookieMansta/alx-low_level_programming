#include "main.h"
/**
 * factorial - A function that returns the factorial of a given number.
 * @n: The number.
 * Return: The factorial.
 */

int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
