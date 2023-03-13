#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: The pointer To the first string
 * @s2: The pointer To the second string
 * Return: A pointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *p, *qs1, *qs2;
	int i = 0, ls1 = 0, ls2 = 0;

	qs1 = s1;
	qs2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		ls1++;
		s1++;
	}
	s1 = qs1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		ls2++;
		s2++;
	}
	s2 = qs2;
	p = malloc(sizeof(char) * (ls1 + ls2 + 1));
	qs1 = p;
	if (p == NULL)
		return (NULL);
	for (; i < (ls1 + ls2); i++)
	{
		if (i < ls1)
		{
			p[i] = *s1;
			s1++;
		}
		else
		{
			p[i] = *s2;
			s2++;
		}
	}
	p[i] = '\0';
	return (qs1);
}
