
/**
 * *_strcat - A function that concatenates two strings.
 * @src: The source string.
 * @dest: The destination string
 * Return: char array
 */

char *_strcat(char *dest, char *src)
{
	char *catted = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (catted);
}
