#include <stdio.h>
/**
 * main - Check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, next;
	long int sum;

	sum = 0;
	a = 1;
	b = 2;
	while (b < 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		next = a + b;
		a = b;
		b = next;
	}
	printf("%ld\n", sum);
	return (0);
}
