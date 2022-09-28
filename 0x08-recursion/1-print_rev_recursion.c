#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _puts_recursion - check the code
 * @s: blablalba
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}
	else
	{
		_puts_recursion(++s);
		_putchar(s[0]);
	}
}
