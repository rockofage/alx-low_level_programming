#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	/*int rev = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else if (n == 0)
		_putchar('0');
	if (n > 0)
	{
		while (n / 10 > 0 || n % 10 > 0)
		{
			rev = rev * 10 + n % 10;
			n = n / 10;
		}
		while (rev / 10 > 0 || rev % 10 > 0)
		{
			_putchar(rev % 10 + '0');
			rev = rev / 10;
		}
	}
	*/

	int counter, nc, i, div;

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
