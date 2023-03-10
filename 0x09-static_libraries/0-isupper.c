/**
 * _isupper - checks the input for uppercase characters.
 * @c: The character inputted.
 * Description: Checks whether the character is upper case.
 * Return: Returns 1 for uppercase and 0 for others.
 */

int _isupper(int c)
{

	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

