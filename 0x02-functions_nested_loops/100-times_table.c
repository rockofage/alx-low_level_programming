#include "main.h"

/**
 * print_times_table - prints times table
 *@n: number of times table
 * Return: void
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i = 0;

		while (i <= n)
		{
			int j = 0;

			while (j <= n)
			{
				int p = i * j;
				int di = 100;

				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (p == 0)
				{
					_putchar(p + '0');
				}
				else
				{
					while ((p / di) == 0)
					{
						_putchar(' ');
						di = di / 10;
					}
					while (di >= 1)
					{
						_putchar((p / di) + '0');
						p = p % di;
						di /= 10;
					}
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
