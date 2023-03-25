#include "main.h"
/**
 * _isdigit - Checks if a character is a digit
 * @c: Character to be checked
 *Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
