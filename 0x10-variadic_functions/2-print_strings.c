#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that print strings.
 * @separator: A string that will be used as a separator between strings.
 * @n: The number of strings
 * @...: The strings
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list allParams;
	unsigned int i;
	char *string;

	va_start(allParams, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(allParams, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(allParams);
}
