#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	long int f[50], m;

	m = 2;
	f[0] = 1;
	f[1] = 2;

	for (n = 2; n < 50; n++)
	{
		f[n] = f[n - 2] + f[n - 1];
		if ((f[n] % 2) == 0 && f[n] < 4000000)
		{
			m += f[n];
		}



	}
	printf("%ld\n", m);
	return (0);

}
