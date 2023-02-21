#include "main.h"
/**
 * print_alphabet - writes the letters of the alphabet in lower case to stdout
 * @l: The letters of the alphabet.
 * Description: writes the letters of the alphabet in lower case to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}

	_putchar('\n');
}
