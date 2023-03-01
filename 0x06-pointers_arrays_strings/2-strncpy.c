/**
 * _strncpy - a function that copys the strings.
 * @src: The source string.
 * @dest: The destination string.
 * @n: The size of the bytes.
 * Return: char array
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *copied = dest, *start = src;

	while (*src)
	{
		len++;
		src++;
	}

	len++;

	if (n > len)
	{
		n = len;
	}

	src = start;

	for (; i < n; i++)
	{
		*dest++ = *src++;
	}

	return (copied);
}
