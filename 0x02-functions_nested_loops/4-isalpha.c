#include "main.h"

/**
 * _isalpha - Checks for alphabets
 *
 * @c: interger value of character
 *
 * Return: 1 if character is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else\
	{
		return (0);
	}
}
