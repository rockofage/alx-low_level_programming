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
	int i, counter;

	i = counter = 0;
	while (src[counter] != '\0')
		counter++;
	for (i = 0; i <= counter; i++)
		dest[i] = src[i];
	return (dest);
}
