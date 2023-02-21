#include <stdio.h>
/**
 * print_to_98 - Lists numbers in order to 98.
 * @n: The number inputted.
 * Description: Lists numbers in order to 98.
 * Return: The numbers.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
			{
				continue;
			}
			printf(", ");

		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				continue;
			}
			printf(", ");
		}
		printf("\n");
	}

}
