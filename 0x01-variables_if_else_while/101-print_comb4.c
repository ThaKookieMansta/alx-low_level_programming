#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fNum, sNum, tNum;

	for (fNum = '0'; fNum <= '9'; fNum++)
	{
		for (sNum = fNum + 1; sNum <= '9'; sNum++)
		{
			for (tNum = sNum + 1; tNum <= '9'; tNum++)
			{
				putchar(fNum);
				putchar(sNum);
				putchar(tNum);
				if (fNum == '7' && sNum == '8' && tNum == '9')
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
