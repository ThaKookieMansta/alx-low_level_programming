#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int value = 1;
	char *endian = (char *)&value;

	if (*endian)
	{
		return (1);
	}
	return (0);
}
