#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int dec;

	for (dec = '0'; dec <= '9'; dec++)
	{
		putchar(dec);
		if (dec != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
