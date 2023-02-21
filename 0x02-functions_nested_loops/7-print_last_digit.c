#include "main.h"
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