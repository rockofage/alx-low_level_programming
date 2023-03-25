#include <stdio.h>
/**
 * main - FizzBuzz test
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i > 1)
		{
			printf(" ");
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz");
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			continue;
		}
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
