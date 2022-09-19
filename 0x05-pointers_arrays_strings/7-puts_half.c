#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * puts_half - check the code
 * @str: blablalba
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int len = 0;
	int k = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (len % 2 == 0)
		k = len / 2;
	else
		k = len / 2 + 1;
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
