#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positve numbers
 * @argc: argc
 * @argv: argv
 *
 * Return: results
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
