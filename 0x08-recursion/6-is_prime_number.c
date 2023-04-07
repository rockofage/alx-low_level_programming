#include "main.h"

/**
 * is_prime_number - check for prime number
 * @n: number
 * @f: factor
 *
 * Return: 1 or 0
 */
int proper_prime(int n, int f);
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (proper_prime(n, 2));
}
/**
 * proper_prime - checks for prime number
 * @n: number
 * @f: factor
 *
 * Return: 1 or 0
 */
int proper_prime(int n, int f)
{
	if (f == n)
		return (1);
	if (n % f == 0)
		return (0);
	return (proper_prime(n, f + 1));
}
