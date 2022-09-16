#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * print_number - check the code
 * @n: bo
 * Return: void
 */
void print_number(int n)
{
	int x = n;
	int nd = 0;
	int mod = 1;
	int i;
	
	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}
	while (n)
	{
		n = n / 10;
		nd++;
	}
	for (i = 1; i < nd; i++)
		mod *= 10;
	for (i = 0; i < nd; i++)
	{
		_putchar((x / mod) % 10 + '0');
		mod = mod / 10;
	}
	_putchar('\n');
}
