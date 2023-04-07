#include "main.h"

int _strlen_recursion(char *s);
int proper_palindrome(char *s, int i, int last);
/**
 * is_palindrome - checks for palindromic strings
 * @s: string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len;

	if (s[0] == '\0')
		return (1);
	len = _strlen_recursion(s);
	return (proper_palindrome(s, 0, len - 1));
}
/**
 * proper_palindrome - checks for palindrome
 * @s: string
 * @i: counter
 * @last: last letter index
 *
 * Return: 1 or 0
 */
int proper_palindrome(char *s, int i, int last)
{
	if (i >= last)
		return (1);
	if (s[i] != s[last])
		return (0);
	return (proper_palindrome(s, i + 1, last -1));
}
/**
 * _strlen_recursion - calculates length of string
 * @s: string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
