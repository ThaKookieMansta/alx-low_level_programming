#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f, t, i, total;

	f = 0;
	t = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0)
		{
			f += i;
		}
		if (i % 3 == 0)
		{
			t += i;
		}

	}
	total = t + f;
	printf("%d\n", total);
	return(0);
}
