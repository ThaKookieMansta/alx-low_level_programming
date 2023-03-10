#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the number of arguments
 * @argc: arguement count
 * @argv: argument value,
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
