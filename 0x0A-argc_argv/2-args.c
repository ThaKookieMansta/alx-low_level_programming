#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints All arguments it receives.
 * @argc: arguement count
 * @argv: argument value,
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
