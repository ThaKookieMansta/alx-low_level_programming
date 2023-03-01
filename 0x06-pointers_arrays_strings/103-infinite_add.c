#include "main.h"

/**
 * rev_string - A function that reverses an array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int excess = 0, i = 0, j = 0, nums = 0;
	int a = 0, b = 0, total = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || excess == 1)
	{
		if (i < 0)
		{
			a = 0;
		}
		else
		{
			a = *(n1 + i) - '0';
		}
		if (j < 0)
		{
			b = 0;
		}
		else
		{
			b = *(n2 + j) - '0';
		}
		total = a + b + excess;
		if (total >= 10)
		{
			excess = 1;
		}
		else
		{
			excess = 0;
		}
		if (nums >= (size_r - 1))
		{
			return (0);
		}
		*(r + nums) = (total % 10) + '0';
		nums++;
		j--;
		i--;
	}
	if (nums == size_r)
	{
		return (0);
	}
	*(r + nums) = '\0';
	rev_string(r);
	return (r);
}
