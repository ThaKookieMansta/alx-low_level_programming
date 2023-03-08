#include "main.h"


/**
 * my_prime_function - A function that Checks if N is divisible by anything
 * @n: The number.
 * @m: The divisibility.
 * Return: The Value.
 */


int my_prime_function(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}

	if (n % m == 0 && m > 0)
	{
		return (0);
	}
	return (my_prime_function(n, m - 1));
}

/**
 * is_prime_number - A function that checks if a number is a prime number.
 * @n: The number.
 * Return: 1 if number is prime and 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (my_prime_function(n, n - 1));
}
