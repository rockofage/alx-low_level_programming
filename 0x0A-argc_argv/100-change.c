#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns number of coins
 * @argc: argc
 * @argv: argv
 *
 * Return: results
 */
int main(int argc, char *argv[])
{
	int i, change, coins = 0;
	int deno[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		if (change / deno[i] > 0)
		{
			coins += change / deno[i];
			change = change % deno[i];
		}
	}
	printf("%d\n", coins);
	return (0);
}
