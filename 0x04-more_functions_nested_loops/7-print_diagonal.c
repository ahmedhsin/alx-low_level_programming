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
	int k = 0;
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (; k < n; k++)
	{
		for (; i < k; i++)
		{
			_putchar(' ');
		}
		_putchar('\');
	}
}
