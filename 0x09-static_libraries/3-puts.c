#include "main.h"
/**
 * _puts - This function prints a string followed by a new line.
 * @str: The string.
 * Return: Nothing
 */
void _puts(char *str)
{
	int letters = 0;

	while (str[letters] != '\0')
	{
		_putchar(str[letters]);
		letters++;

	}
	_putchar('\n');
}
