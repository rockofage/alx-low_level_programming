#include "main.h"
/**
 * main - Determine if a random number is positive, negative or zero.
 *
 * Return: void
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);
	printf("\n");
}
