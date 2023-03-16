#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: The pointer to the memory previously allocated
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes of the new memory block
 * Return: A void pointer to new memory location
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newLocation, *newPointer;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	newLocation = malloc(new_size);
	newPointer = ptr;
	if (old_size > new_size)
		old_size = new_size;

	for (i = 0; i < old_size; i++)
		newLocation[i] = newPointer[i];

	free(ptr);

	return (newLocation);
}
