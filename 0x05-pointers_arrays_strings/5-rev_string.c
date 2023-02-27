
/**
 * rev_string - This function prints a string in
 * reverse followed by a new line.
 * @s: The string.
 * Return: Nothing
 */

void rev_string(char *s)
{
	int l = 0, i = 0;
	char a;

	while (s[l] != '\0')
	{
		l++;
	}

	while (i < l--)
	{
		a = s[i];
		s[i++] = s[l];
		s[l] = a;
	}
}
