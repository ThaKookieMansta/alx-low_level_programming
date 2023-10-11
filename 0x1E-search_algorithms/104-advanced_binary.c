#include "search_algos.h"

/**
  * abr - Searches recursively using binary search.
  *
  * @array: A pointer to the first element of the [sub]array to search.
  * @left: The starting index of the array to search.
  * @right: The ending index of the array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1
  * Otherwise, the index where the value is located.
  */

int abr(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (abr(array, left, i, value));
	return (abr(array, i + 1, right, value));
}

/**
  * advanced_binary - This function searches for a value in a sorted
  * array of integers.
  *
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: The index where value is located
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (abr(array, 0, size - 1, value));
}
