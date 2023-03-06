#include <stddef.h>
/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search
 * @needle: an input string to locate
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *pn = needle, *ph = haystack;

	while (ph)
	{
		ph = haystack;
		pn = needle;
		while (*pn)
		{

			if (*haystack == *needle)
			{
				haystack++;
				needle++;
			}

			else
				break;

		}

		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack = ph + 1;
	}
	return (NULL);
}
