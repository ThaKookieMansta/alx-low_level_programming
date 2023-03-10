#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that Multiplies 2 number arguments.
 * @argc: arguement count
 * @argv: argument value,
 * Return:  0 on Success 1 on error
 */


int main(int argc, char *argv[])
{
	int numOne, numTwo, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	numOne = atoi(argv[1]);
	numTwo = atoi(argv[2]);
	result = numOne * numTwo;
	printf("%d\n", result);
	return (0);
}
