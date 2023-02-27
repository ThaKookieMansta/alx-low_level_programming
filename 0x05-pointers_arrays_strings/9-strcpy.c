/**
 * _strcpy - This function copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: The destination of the pointed value.
 * @src: The pinted value.
 * Return: The copied value.
 */

char *_strcpy(char *dest, char *src)
{
	char *i = dest;

	while (*src)
		*dest++ = *src++;
	return (i);
}
