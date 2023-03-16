#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 * @n: an input integer for the string to concatenate
 * Return: A pointer to concatened strings or NULL if it str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newString;
	unsigned int i = 0, stringLenght1 = 0, stringLenght2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[stringLenght1])
		stringLenght1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[stringLenght2])
		stringLenght2++;

	if (n >= stringLenght2)
		n = stringLenght2;

	newString = malloc(stringLenght1 + n + 1);
	if (newString == NULL)
		return (NULL);

	for (; i < (stringLenght1 + n); i++)
	{
		if (i < stringLenght1)
			newString[i] = *s1, s1++;
		else
			newString[i] = *s2, s2++;
	}
	newString[i] = '\0';
	return (newString);
}
