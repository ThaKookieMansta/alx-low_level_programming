/**
 * _strcmp - A function that compares two strings.
 * @s1: The First string.
 * @s2: The Second string.
 * Return: Difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++, s2++;
	}
	return (*s1 - *s2);
}
