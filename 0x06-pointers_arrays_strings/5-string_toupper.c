
/**
 * string_toupper - A function that changes all lowercase letters of a  string
 * to upper case
 * @s: The string
 * Return: char pointer to converted string
 */

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}
	return (start);
}
