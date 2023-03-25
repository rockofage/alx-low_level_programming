#include <stdio.h>
/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, fcount;
	long int num, large;

	num = 612852475143;
	fcount = 0;
	for (i = 1; i <= num / 2; i++)
	{
		/* Check if i is a factor*/
		if (num % i == 0)
		{
			/* Check if i is a prime number*/
			for (j = 1; j < (i / 2) + 1; j++)
			{
				if (i % j == 0)
				{
					fcount++;
				}
				if (fcount > 1)
				{
					break;
				}
			}
			if (fcount == 1)
			{
				large = i;
			}
		}
	}
	printf("%ld\n", large);
	return (0);
}
