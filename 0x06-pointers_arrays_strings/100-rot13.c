#include "main.h"

/**
 * rot13 - encrypts a string by ROT13
 * @s: string to be encrypted
 *
 * Return: encrypted string
 */
char *rot13(char *s)
{
	int i, j;
	char *ori, *new;

	ori = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	new = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
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
