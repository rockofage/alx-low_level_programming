#include "main.h"
/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if upper and 0, otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
