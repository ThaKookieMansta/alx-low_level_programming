#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fNum, sNum;

	for (fNum = 0; fNum <= 98; fNum++)
	{
		for (sNum = fNum + 1; sNum <= 99; sNum++)
		{
			putchar((fNum / 10) + '0');
			putchar((fNum % 10) + '0');
			putchar(' ');
			putchar((sNum / 10) + '0');
			putchar((sNum % 10) + '0');

			if (fNum == 98 && sNum == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
