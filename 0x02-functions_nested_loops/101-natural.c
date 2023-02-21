#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f, t, i, total;

	total = 0;
	
	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			total += i;
		}
		
	}
	
	printf("%d\n", total);
	return (0);
}
