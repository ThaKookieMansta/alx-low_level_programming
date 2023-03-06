/**
 * _memcpy - Copies memory area.
 * @n: The number of bytes.
 * @src: The source of memory
 * @dest: The destination.
 * Return: The pointer p.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		p[i] = src[i];
	}

	return (p);
}
