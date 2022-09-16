#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * print_line - check the code
 * @n: bbbbbbbl
 * Return: void
 */
void print_line(int n)
{
	int i = 0;


	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
