/**
 * *_strncat - A function that concatenates two strings.
 * @src: The source string.
 * @dest: The destination string.
 * @n: The size of the bytes.
 * Return: char array
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *catted = dest, *start = src;

	while (*src)
	{
		len++;
		src++;
	}

	while (*dest)
	{
		dest++;
	}

	if (n > len)
	{
		n = len;
	}

	src = start;

	for (; i < n; i++)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (catted);
}
