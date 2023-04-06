#include "main.h"

/**
 * binary_to_uint - A function that converts a
 * binary number to an unsigned int
 * @b: The pointer to the 0 or 1 characters
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int  convertedInt = 0, factor = 1, index = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[index])
	{
		index++;
	}

	while (index)
	{
		if (b[index - 1] != '0' && b[index - 1] != '1')
		{
			return (0);
		}

		if (b[index - 1] == '1')
		{
			convertedInt += factor;
		}
		factor *= 2;
		index--;
	}
	return (convertedInt);
}
