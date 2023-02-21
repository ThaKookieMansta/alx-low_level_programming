#include "main.h"

/**
 * print_alphabet_x10 - writes the letters of the
 * alphabet in lower case 10 times to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	char l;
	int i = 0;

	while (i < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		i++;
	}
}
