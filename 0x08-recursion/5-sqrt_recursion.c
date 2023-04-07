#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of a num
 * @n: number
 * @count: counter
 *
 * Return: answer
 */
int proper_sqrt(int n, int count);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (proper_sqrt(n, 0));
}
/**
 * proper_sqrt - finds sqrt
 * @n: number
 * @count: counter
 *
 * Return: answer
 */
int proper_sqrt(int n, int count)
{
	if (count * count > n)
		return (-1);
	if (count * count == n)
		return (count);
	return (proper_sqrt(n, count + 1));
}
