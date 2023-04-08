#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 * @argc: number of args
 * @argv: pointer to args
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
