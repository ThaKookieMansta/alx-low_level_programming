#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	long int f[98];

	f[0] = 1;
	f[1] = 2;
	printf("%ld, %ld", f[0], f[1]);

	for (n = 2; n < 98; n++)
	{
		f[n] = f[n - 2] + f[n - 1];
		if (n == 50)
		{
			printf("%ld\n", f[n]);

		}
		else
		{
			printf("%ld, ", f[n]);
		}
	}

}
