#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * more_numbers - check the code
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < 15; i++)
		{

			if (i >= 10)
				_putchar('1');

			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
