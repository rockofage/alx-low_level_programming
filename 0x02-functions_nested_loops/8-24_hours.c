#include "main.h"

/**
 * jack_bauer - print all seconds of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hours = 0;

	while (hours < 24)
	{
		int mins = 0;

		while (mins < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
			mins++;
		}
		hours++;
	}
}
