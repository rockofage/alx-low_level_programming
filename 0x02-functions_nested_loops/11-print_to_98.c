#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints from n to 98
 * @n: starting integer
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	if (abs(n) < 10)
	{
		_putchar(abs(n) + '0');
	}
	else if (abs(n) < 100)
	{
		_putchar((abs(n) / 10) + '0');
		_putchar((abs(n) % 10) + '0');
	}
	else if (abs(n) < 1000)
	{
		_putchar((abs(n) / 100) + '0');
		_putchar(((abs(n) / 10) % 10) + '0');
		_putchar((abs(n) % 10) + '0');
	}
	if (n > 98)
	{
		n--;
		while (n >= 98)
		{
			if (abs(n) < 100)
		        {
				_putchar(',');
				_putchar(' ');
		                _putchar((abs(n) / 10) + '0');
		                _putchar((abs(n) % 10) + '0');
		        }
		        else if (abs(n) < 1000)
        		{
				_putchar(',');
				_putchar(' ');
		                _putchar((abs(n) / 100) + '0');
        	        	_putchar(((abs(n) / 10) % 10) + '0');
	        	        _putchar((abs(n) % 10) + '0');
		        }
			n--;
		}
	}
	else
	{
		n++;
		while (n <= 98)
		{
			_putchar(',');
			_putchar(' ');
			if (n < 0)
		        {
		                _putchar('-');
		        }
		        if (abs(n) < 10)
		        {
		                _putchar(abs(n) + '0');
		        }
			else if (abs(n) < 100)
		        {
		                _putchar((abs(n) / 10) + '0');
		                _putchar((abs(n) % 10) + '0');
			}
			else if (abs(n) < 1000)
			{
				_putchar((abs(n) / 100) + '0');
				_putchar(((abs(n) / 10) % 10) + '0');
				_putchar((abs(n) % 10) + '0');
			}
			n++;
		}
	}
	_putchar('\n');
}
