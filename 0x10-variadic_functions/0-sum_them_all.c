#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: The number of parameters
 * @...: The parameters to e summed.
 * Return: The sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list allParams;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(allParams, n);
	for (i = 0; i < n; i++)
		sum += va_arg(allParams, int);

	va_end(allParams);
	return (sum);
}
