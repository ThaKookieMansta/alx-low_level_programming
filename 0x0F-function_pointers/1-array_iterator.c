#include <stdlib.h>

/**
 * array_iterator -  a function that executes a function given as
 * a parameter on each element of an array.
 * @array: A pointer to array
 * @size: The size of the array
 * @action: The pointer to the function you need to use
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
