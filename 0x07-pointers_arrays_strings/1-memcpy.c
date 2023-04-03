#include "main.h"

/**
 * _memcpy - copies n bytes of a memory area to another
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes
 *
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
