#include "main.h"

/**
 * _strstr - checks for a substring in a mainstring
 * @haystack: mainstring
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char c = needle[0];
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == c)
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
					break;
				j++;
				if (needle[j] == '\0')
					return (&haystack[i]);
			}
		}
	}
	return (0);
}
