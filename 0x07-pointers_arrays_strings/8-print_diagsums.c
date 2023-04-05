#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sums the figures in the diag of a sq. matrix
 * @a: square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = a[0];
	sum2 = a[size - 1];
	for (i = 1; i < size; i++)
	{
		sum1 += a[size * i + i];
		sum2 += a[size * (i + 1) - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
