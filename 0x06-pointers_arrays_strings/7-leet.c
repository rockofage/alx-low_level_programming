#include "main.h"

/**
 * leet - encrypts a string
 * @s: string
 *
 * Return: edited @s
 */
char *leet(char *s)
{
	int i, j;
	char *ori, *new;

	ori = "aAeEoOtTlL";
	new = "4433007711";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ori[j] != '\0'; j++)
		{
			if (s[i] == ori[j])
			{
				s[i] = new[j];
				break;
			}
		}
	}
	return (s);
}
