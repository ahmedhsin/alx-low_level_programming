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
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(++s);
	}
}
