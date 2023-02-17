#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fNum, sNum;

	for (fNum = '0'; fNum <= '9'; fNum++)
	{
		for (sNum = fNum + 1; sNum <= '9'; sNum++)
		{
			if (fNum == sNum)
			{
				sNum++;
			}
			putchar(fNum);
			putchar(sNum);
			if (fNum == '8' && sNum == '9')
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
