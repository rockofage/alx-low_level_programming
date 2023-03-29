#include "main.h"
/**
 * puts2 -function should print only one character out of the two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;

	do
	{
		putchar(str[i]);
		i += 2;
	}
	while (str[i] != '\0' && str[i-1] != '\0');
	putchar('\n');
}
