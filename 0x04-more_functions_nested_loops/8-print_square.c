#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * print_square - check the code
 * @size: lonl
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;
	int n = size;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
