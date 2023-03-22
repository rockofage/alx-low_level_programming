#include "main.h"

/**
 * print_alphabets  - Print lowercase alphabets
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	int i = 'a';
	while(i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
