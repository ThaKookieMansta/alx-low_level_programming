/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: The input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	char *p = accept;
/*We first set up a loop to go through each char in s.*/
	while (*s)
	{
		j = 0;
		/*We set up the loop to go through every char in accept so that we compare
		it to the char in s.*/
		while (*accept)
		{
			if (*accept == *s)
			{
				i++;
				j = 1;
				
			}
			accept++;
		}
		s++;
		accept = p;
		if (j == 0)
			break;
	}
	return (i);
}