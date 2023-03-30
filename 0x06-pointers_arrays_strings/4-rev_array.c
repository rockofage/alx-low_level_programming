#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n--;
	for (i = 0; i < n; i++)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		n--;
	}
}
