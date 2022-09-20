#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * puts2 - check the code
 * @str: blablalba
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int ok = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (ok)
			_putchar(str[i]);
		ok = !ok;
	}
	_putchar('\n');
}
