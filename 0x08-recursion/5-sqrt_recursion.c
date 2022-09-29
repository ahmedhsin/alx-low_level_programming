#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * solve - check the code
 * @n: blablalba
 * @i: blllll
 * Return: void
 */
int solve(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (solve(n, i + 1));
}
/**
 * _sqrt_recursion - check the code
 * @n: blablalba
 * Return: void
 */

int _sqrt_recursion(int n)
{
	return (solve(n, 1));
}
