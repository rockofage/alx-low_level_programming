#include "main.h"
/**
 * print_number - prints an integer
 *
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	int rev = 0;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n == 0)
	{
		_putchar(n + '0');
	}
	while (n / 10 != 0 || n % 10 != 0)
	{
		rev = rev * 10 + n % 10;
		n = n / 10;
	}
	while (rev / 10 != 0 || rev % 10 != 0)
	{
		_putchar((rev % 10) + '0');
		rev = rev / 10;
	}
}
