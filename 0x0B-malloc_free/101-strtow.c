#include <stdlib.h>

/**
 * strtow - A function that splits a string into words
 * @str: The pointer of the string.
 * Return: A pointer to concatened strings or NULL if it str is NULL
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, j, m, k = 0, len = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[i]; i++)
	{
		if ((str[i] != ' ' || *str != '\t') &&
				((str[i + 1] == ' ' || str[i + 1] == '\t') || str[i + 1] == '\n'))
			count++;
	}
	if (count == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (count + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0' && k < count; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			len = 0;
			j = i;
			while ((str[j] != ' ' || str[j] != '\t') && str[j] != '\0')
				j++, len++;
			s[k] = malloc((len + 1) * sizeof(char));
			if (s[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(s[k]);
				free(s);
				return (NULL);
			}
			for (m = 0; m < len; m++, i++)
				s[k][m] = str[i];
			s[k++][m] = '\0';
		}
	}
	s[k] = NULL;
	return (s);
}
