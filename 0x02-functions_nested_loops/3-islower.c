#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * Parameters: interger value of a character
 *
 * Return: 1 if lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
