#include "main.h"

/*
 * sum_natural - sums all the multiples of 3 and 5 below 1024
 *
 * Return: void
 */
void sum_natural(void)
{
	int mul_3, mul_5, mul_15, sum_3, sum_5, sum_15;
	mul_3 = mul_5 = mul_15 = sum_3 = sum_5 = sum_15 = 0;

	while (mul_3 < 1024)
	{
		sum_3 += mul_3;
		mul_3 += 3;
	}
	while (mul_5 < 1024)
	{
		sum_5 += mul_5;
		mul_5 += 5;
	}
	while (mul_15 < 1024)
	{
		sum_15 += mul_15;
		mul_15 += 15;
	}

	int final_answer = sum_3 + sum_5 - sum_15;
	int final_answer_reverse = 0;
	
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
}
