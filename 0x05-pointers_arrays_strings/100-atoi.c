#include "main.h"

/**
 * _atoi - returns an integer that was mixed in a bunch of characters
 * @s: string input
 *
 * Return: integer
 */
int _atoi(char *s)
{
	char sign = '+';
	int num, i;

	i = num = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-' || s[i] == '+')
		{
			if (s[i] == sign)
				sign = '+';
			else
				sign = '-';
		}
		if (s[i] >= '0' && s[i] <= '9')
			num = (num * 10) + (s[i] - '0');
		else if (num > 0)
			break;
		i++;
	}
	if (sign == '-')
		num = num * -1;
	return (num);
}
