#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int a, b, next;

	i = 0;
	a = 1;
	b = 2;
	printf("%ld", a);
	while (i < 49)
	{
		printf(", ");
		printf("%ld", b);
		next = a + b;
		a = b;
		b = next;
		i++;
	}
	return (0);
}
