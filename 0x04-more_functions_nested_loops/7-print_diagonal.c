#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * print_diagonal - check the code
 * @n:blablalbla
 * Return: void
 */
void print_diagonal(int n)
{
	int k = 1;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (; k <= n; k++)
	{
		for (i = 1; i < k; i++)
		{
			_putchar(' ');
		}
		_putchar('\n');
	}
}
