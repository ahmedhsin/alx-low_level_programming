#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * solve - check the code
 * @j: blablalba
 * @i: blllll
 * @s:sss
 * Return: void
 */
int solve(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j || i == j)
			return (1);
		solve(s, i + 1, j - 1);
	}
	else
		return (0);
}

/**
 * _strlen_recursion - check the code
 * @s: blablalba
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}
/**
 * is_palindrome - check the code
 * @s: blablalba
 * Return: void
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (solve(s, 0, len - 1));
}
