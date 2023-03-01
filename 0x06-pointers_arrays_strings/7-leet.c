/**
 * leet - A function that encodes a string into 1337.
 * @s: an input string to encode
 * Return: An encode string
 */
char *leet(char *s)
{
	int i = 0, j;
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char nums[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = nums[j];
			}
		}
		i++;
	}
	return (s);
}
