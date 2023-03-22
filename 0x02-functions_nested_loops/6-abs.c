#include "main.h"
#include <stdio.h>

/**
 * _abs - returns absolute value of an integer
 *@n: Integer of question
 * Return: Absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
