#include "main.h"

/**
 * _memset - Fills the first n bytes of memory.
 * @n: The number of bytes.
 * @b: The constant byte.
 * @s: The pointer.
 * Return: The pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	/* We first declare and initialize our pointer to the pointer given to*/
	char *p = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (p);

}
