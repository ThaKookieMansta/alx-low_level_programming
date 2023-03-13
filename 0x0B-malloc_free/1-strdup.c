#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the string given
 * as a parameter.
 * @str: The string
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int i = 0;
	char *p, *q;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	q = str;

	while (*str)
	{
		len++;
		str++;
	}


	str = q;
	p = malloc((len + 1) * sizeof(char));
	q = p;

	if (p == NULL)
	{
		return (NULL);
	}

	while (i < len)
	{
		p[i] = *str;
		i++;
		str++;
	}
	p[i] = '\0';

	return (q);

}