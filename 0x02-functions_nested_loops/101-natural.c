#include "main.h"

/**
 * sum_natural - sums all the multiples of 3 and 5 below 1024
 *
 * Return: void
 */
void sum_natural(void)
{
	int final_answer, final_answer_reverse, i;

	final_answer, final_answer_reverse, i = 0;

	while (i < 1024)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			final_answer += i;
		}
		i++;
	}
	while (final_answer / 10 != 0 || final_answer % 10 != 0)
	{
		final_answer_reverse = (final_answer_reverse * 10) + (final_answer % 10);
		final_answer = final_answer / 10;
	}
	while (final_answer_reverse % 10 != 0 || final_answer_reverse / 10 != 0)
	{
		_putchar((final_answer_reverse % 10) + '0');
		final_answer_reverse = final_answer_reverse / 10;
	}
	_putchar('\n');
}
