#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: The size of memory to be allocated.
 * Return: A pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
