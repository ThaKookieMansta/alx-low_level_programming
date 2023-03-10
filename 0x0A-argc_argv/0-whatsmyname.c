#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints its name
 * @argc: arguement count
 * @argv: argument value,
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
