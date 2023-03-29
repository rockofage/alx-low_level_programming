#include "main.h"

/**
 * _strcpy - copies a string from a source to a destination
 * @src: pointer to the source of string
 * @dest: pointer to the destination of string
 *
 * Return: a pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i + 1] = src[i + 1];
	return (dest);
}
