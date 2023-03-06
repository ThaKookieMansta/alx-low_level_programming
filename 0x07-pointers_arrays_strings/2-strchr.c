#include <stddef.h>
/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * in the string s.
 * @s: The string.
 * @c: The Character
 * Return: The pointer.
 */

char *_strchr(char *s, char c)
{
	/*First we loop through the String*/
	while (*s)
	{
		/*This section Checks whether the value of C is in the String*/
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);

}
