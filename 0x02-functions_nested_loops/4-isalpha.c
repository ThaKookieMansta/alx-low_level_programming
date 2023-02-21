/**
 * _isalpha - checks for alphabetic characters.
 * @c: The character inputted.
 * Description: Checks whether the character is in the alphabet.
 * Return: Returns 1 for lowercase and 0 for others.
 */

int _isalpha(int c)

{

	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
