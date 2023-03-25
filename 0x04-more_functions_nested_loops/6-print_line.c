#include "main.h"
/**
 * print_line - prints a line
 * @n: the number of times '_' is printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
