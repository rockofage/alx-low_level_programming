#include "main.h"

/**
 * _strcat - joins two strings
 * @dest: string to be joined by other
 * @src: string to join the other
 *
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, counter;

	i = counter = 0;
	while (dest[counter] != '\0')
		counter++;
	while (src[i] != '\0')
	{
		dest[counter] = src[i];
		counter++;
		i++;
	}
	dest[counter] = '\0';
	return (dest);
}
