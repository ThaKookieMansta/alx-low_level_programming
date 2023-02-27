#include <stdio.h>

/**
 * print_array - This function prints n elements of an array.
 * @n: The number of elements.
 * @a: The array.
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0, p = n - 1;

	while (i <= p)
	{
		if (i == p)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		
		i++;
	}
	printf("\n");
}
