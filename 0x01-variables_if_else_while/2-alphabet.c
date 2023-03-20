#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - entry point
 *
 * Description: Print lowercase alphabet
 * Return: Always 0 (success)
 */

int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	putchar(lowerCase);
	lowerCase++;

	putchar('\n');
	return (0);
}
