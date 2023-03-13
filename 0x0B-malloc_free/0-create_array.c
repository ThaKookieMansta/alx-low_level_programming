#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: A pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));

	/*
	*Let us check if Malloc has failed.
	*/
	if (p == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		p[i] = c;
		i++;
	}

	return (p);
}
