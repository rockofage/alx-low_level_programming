#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int counter, i, div;
	unsigned int nc;

	div = 1;
	counter = 0;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else if (n == 0)
		_putchar('0');
	if (n > 0)
	{
		nc = n;
		while (nc > 0)
		{
			counter++;
			nc = nc / 10;
		}
		for (i = 1; i < counter; i++)
			div = div * 10;
		while (div > 0)
		{
			_putchar(n / div + '0');
			n = n % div;
			div = div / 10;
		}
	}
}
