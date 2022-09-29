#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * int factorial(int n); - check the code
 * @n: blablalba
 * Return: void
 */

int factorial(int n)
{
	if (n  < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
