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
	int k;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 1; k <= n; k++)
		{
			for (i = 1; i < k; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
}
