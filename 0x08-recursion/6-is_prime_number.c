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
	if (n == 1)
		return (0);
	else if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (solve(n, i + 1));
}
/**
 * is_prime_number - check the code
 * @n: blablalba
 * Return: void
 */

int is_prime_number(int n)
{
	return (solve(n, 2));
}
