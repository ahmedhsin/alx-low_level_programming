#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _print_rev_recursion - check the code
 * @s: blablalba
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
	else
	{
		return;

	}
}
