/**
 * _strncpy - a function that copys the strings.
 * @src: The source string.
 * @dest: The destination string.
 * @n: The size of the bytes.
 * Return: char array
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
