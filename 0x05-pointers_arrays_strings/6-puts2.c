#include "main.h"

/**
 * puts2 - This function prints every other character in a string.
 * @str: The string.
 * Return: Nothing
 */

void puts2(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
		l++;

	}
	_putchar('\n');
}
