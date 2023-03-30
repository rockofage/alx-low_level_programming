#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: -15 if @s1 < @s2, 15 if @s2 > @s1 and 0 if s1=s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i, n1, n2;

	for (n1 = 0; s1[n1] != '\0'; n1++)
		continue;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		continue;
	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
	}
	if (n1 > n2)
		return (15);
	if (n1 < n2)
		return (-15);
	if (s1[i] > s2[i])
		return (15);
	return (-15);
}
