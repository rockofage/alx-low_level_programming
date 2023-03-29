#include "main.h"

/**
 * _strncat - joins a specific number of characters of a new string
 * to an old string
 * @dest: old string
 * @src: new string
 * @n: number of characters to join
 *
 * Return: pointer to old string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, counter;

	counter = 0;
	while (dest[counter] != '\0')
		counter++;
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[counter] = src[i];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
