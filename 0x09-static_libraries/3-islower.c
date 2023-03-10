/**
 * _islower - checks the input for lowercase characters.
 * @c: The character inputted.
 * Description: Checks whether the character is lower case.
 * Return: Returns 1 for lowercase and 0 for others.
 */

int _islower(int c)
{

	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
