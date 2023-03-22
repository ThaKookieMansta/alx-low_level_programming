#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - a function that returns the sum of 2 numbers.
 * @a: The first number
 * @b: The second number
 * Return: The result of the sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that returns the difference 2 numbers
 * @a: The first Number.
 * @b: The second Number
 * Return: The difference of  a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that returns the Product of 2 numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that returns the division of 2 numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The division of the numbers.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - a function that returns the modulo of 2 numbers
 * @a: The first number.
 * @b: The second number.
 * Return: The result of the modulo.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
