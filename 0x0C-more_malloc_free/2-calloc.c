#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array using malloc
 * @nmemb: Number of elements for an array
 * @size: size of nmemb elemnts
 * Return: A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *arrayMemory;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arrayMemory = malloc(nmemb * size);
	if (arrayMemory == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(arrayMemory + i) = 0;

	return (arrayMemory);
}
