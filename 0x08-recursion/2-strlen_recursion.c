#include "main.h"
/**
 * _strlen_recursion - A function that  returns the length of a string.
 * @s: The string.
 * Return: The length.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
