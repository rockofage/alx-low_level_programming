#include <stdio.h>

/**
 * main - prints args
 * @argc: number of args
 * @argv: array of strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
