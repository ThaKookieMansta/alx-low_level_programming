#include "main.h"

/**
 * _strlen - This function returns the lenght of a string.
 * @s: The string.
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);

}
/**
 * puts_half - This function prints half of a string.
 * @str: The string.
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len = _strlen(str), n;

	if (len % 2 != 0)
	{
		n = (len + 1) / 2;

	}
	else
	{
		n = len / 2;

	}
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');

}
