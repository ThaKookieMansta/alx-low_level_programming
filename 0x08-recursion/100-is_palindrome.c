#include "main.h"

/**
 * my_is_palindrome_function - A function that Checks if a string
 * is a palindrome recursively
 * @s: The string.
 * @len: The length of the string
 * @i: The iterator.
 * Return: 1 if palindrome.
 */

int my_is_palindrome_function(char *s, int len, int i)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}

	if (i >= len)
	{
		return (1);
	}

	return (my_is_palindrome_function(s, len - 1, i + 1));
}


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


/**
 * is_palindrome - A function that checks if a string is a palindrome.
 * @s: The string
 * Return: 1 if it is a palindrome, 0 if not.
 */



int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}

	return (my_is_palindrome_function(s, _strlen_recursion(s), 0));
}

