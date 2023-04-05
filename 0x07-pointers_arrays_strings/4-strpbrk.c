#include "main.h"

/**
 * _strpbrk - finds the first occurence of a byte from a string
 * @s: string to search from
 * @accept: group of bytes to search for
 *
 * Return: pointer to the first occurence otherwise 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
