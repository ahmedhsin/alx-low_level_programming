#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _puts - check the code
 * @str: blablalba
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
