#include <stdio.h>
/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long long int a, b, next;
	int i = 0;

	a = 1;
	b = 2;
	printf("%lu", a);
	while (i < 97)
	{
		printf(", %lu", b);
		next = a + b;
		a = b;
		b = next;
		i++;
	}
	printf("\n");
	return (0);
}
