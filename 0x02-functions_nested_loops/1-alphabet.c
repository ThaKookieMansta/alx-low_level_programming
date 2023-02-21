#include "main.h"

/**
 * aphabet - writes the letters of the alphabet in lower case to stdout
 * @letters: The letters of the alphabet.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}

	_putchar('\n');
}
