#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: The lowest value item in the array.
 * @max: The highest value item in the array.
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *newArray;
	int difference, i;

	if (min > max)
		return (NULL);

	difference = max - min;
	newArray = malloc((difference + 1) * sizeof(int));
	if (newArray == NULL)
		return (NULL);

	for (i = 0; i <= difference; i++)
		newArray[i] = min++;

	return (newArray);
}
