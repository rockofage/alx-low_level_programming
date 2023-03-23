#include <stdio.h>
/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, ans;

	i = ans = 0;
	while (i < 1024)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			ans += i;
		}
		i++;
	}
	printf("%d\n", ans);
}
