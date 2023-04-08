#include <stdio.h>

/**
 * main - prints number of args passed
 * @argc: number of args
 * @argv: array of strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
