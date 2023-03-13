#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the string given as a parameter.
 * @str: The string
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *p;
	if (sizeof(str) == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(str) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	while (i < sizeof(str))
	{
		p[i] = str[i];
		i++;
	}

	return (p);

}