#include "main.h"

/**
 * _memset - sets a specified number of memory slots with a specific character
 * @s: memory location
 * @b: character to be set
 * @n: number of bytes of the memory area to set to @b
 *
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
