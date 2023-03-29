#include "main.h"
/**
 * puts_half - prints 2nd half of a string
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int counter, i;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	i = (counter + 1) / 2;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
