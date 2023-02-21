#include "main.h"

/**
 * print_alphabet_x10 - writes the letters of the alphabet in lower case 10 times to stdout
 * @letters: The letters of the alphabet.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	char letters;
	int i = 0;
	while (i < 10)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
		i++;
	}
}