#include "search_algos.h"

/**
  * linear_search - This function searches for a value in an array
  * of integers using Linear search algorithm
  *
  * @array: A pointer to the first element of the array to search
  * @size: The number of elements in the array
  * @value: The value to search for
  *
  * Return: The first index where the value is located
  * if not present or if array is Null, returns -1
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
