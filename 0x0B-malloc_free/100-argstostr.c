#include <stdlib.h>

/**
 * argstostr - A function that concatenates all arguments of the program
 * @ac: number of arguments
 * @av: array containing arguments
 * Return: A pointer to string that containing all arguments
 * or NULL if ac == 0, if av == NULL, or on failure
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int len = 0, i = 0, j, k = 0;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	for (; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}

	len++;
	s = malloc(len * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}

	s[k] = '\0';
	return (s);
}
