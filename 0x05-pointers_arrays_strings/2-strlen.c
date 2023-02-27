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
