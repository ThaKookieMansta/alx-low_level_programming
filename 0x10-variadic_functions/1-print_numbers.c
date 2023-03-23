#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that print numbers.
 * @separator: A string that will be used as a separator between numbers
 * @n: The number of parameters
 * @...: The parameters
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list allParams;
	unsigned int i;
	int numbers;

	va_start(allParams, n);
	for (i = 0; i < n; i++)
	{
		numbers = va_arg(allParams, int);
		printf("%d", numbers);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(allParams);
}
