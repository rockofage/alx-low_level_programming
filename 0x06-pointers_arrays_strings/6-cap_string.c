#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: string edited
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char *sep = " ,;.!?\"(){}";

	if (s[i] >= 97 && s[i] <= 122)
		s[i] -= 32;
	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (s[i - 1] == '\t' || s[i - 1] == '\n')
				s[i] -= 32;
			else
				for (j = 0; sep[j] != '\0'; j++)
				{
					if (s[i - 1] == sep[j])
					{
						s[i] -= 32;
						break;
					}
				}
		}
	}
	return (s);
}
