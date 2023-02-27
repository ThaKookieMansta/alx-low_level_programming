/**
 * _atoi - This function converts a string into an integer.
 * @s: The string.
 * Return: The integer.
 */

int _atoi(char *s)
{
	int sign = 1;
	int sum = 0;
	char n = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			n = 1;
			sum = sum * 10 + *s - '0';
		}

		else if (n)
			break;
		s++;
	}

	if (sign < 0)
		sum = (-sum);

	return (sum);
}