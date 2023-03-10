/**
 * _strlen - This function returns the lenght of a string.
 * @s: The string.
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);

}


/**
 * _strcpy - This function copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: The destination of the pointed value.
 * @src: The pinted value.
 * Return: The copied value.
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);

}
