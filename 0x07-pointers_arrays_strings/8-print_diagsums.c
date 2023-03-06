#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The square matrix of integers
 * @size: The size of the matrix
 * Return: Void
 */
void print_diagsums(int *a, int size)
{
	int i, max = size * size, sumOne = 0, sumTwo = 0;

	for (i = 0; i < max; i += (size + 1))
	{
		sumOne += a[i];
	}

	for (i = size - 1; i < max - 1; i += (size - 1))
	{
		sumTwo += a[i];
	}

	printf("%d, %d \n", sumOne, sumTwo);


}
