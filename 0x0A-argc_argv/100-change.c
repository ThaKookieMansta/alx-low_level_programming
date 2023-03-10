
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: arguement count
 * @argv: argument value,
 * Return:  0 on Success 1 on error
 */


int main(int argc, char *argv[])
{
	int total, coins = 0;

	if (argc == 2)
	{
		total = atoi(argv[1]);
		if (total < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (total % 25 >= 0)
		{
			coins += total / 25;
			total = total % 25;
		}
		if (total % 10 >= 0)
		{
			coins += total / 10;
			total = total % 10;
		}
		if (total % 5 >= 0)
		{
			coins += total / 5;
			total = total % 5;
		}
		if (total % 2 >= 0)
		{
			coins += total / 2;
			total = total % 2;
		}
		if (total % 1 >= 0)
			coins += total;
		printf("%d\n", coins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
