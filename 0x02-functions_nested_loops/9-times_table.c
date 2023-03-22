#include "main.h"

/**
 * times_table - prints 9x table
 *
 * Return: Void
 */
void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		do
		{
			int product = i * j;

			if (j > 0)
			{
				_putchar(',');
				if (product > 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			if (product > 9)
                        {
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
                        }

			else
			{
				_putchar(product + '0');
			}
                        j++;
		}
		while (j < 10);
		_putchar('\n');
		i++;
	}
}
