#include "main.h"

/**
 * _strncpy - copies a specified number of characters in a string
 * @dest: copy of string
 * @src: source of string
 * @n: number of characters to copy
 *
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i <= n ; i++)
		dest[i] = '\0';
	return (dest);
}
