#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * print_rev - check the code
 * @s: blablalba
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
