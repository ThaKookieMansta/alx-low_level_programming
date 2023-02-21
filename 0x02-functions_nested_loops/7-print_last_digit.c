#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: The number inputted.
 * Description: Prints the last digit of a number.
 * Return: The last digit of the number.
 */
int print_last_digit(int n)
{
	int lastDig;

	if (n >= 0)
	{
		lastDig = n % 10;
	}
	else
	{
		lastDig = (n % 10) * -1;
	}
	_putchar(lastDig + '0');
	return (lastDig);
}
