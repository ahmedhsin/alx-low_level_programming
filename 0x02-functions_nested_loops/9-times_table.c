#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * times_table - check the code
 * Return: void
 */

void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		while (j <= 8)
		{
			printf("%d", i * j);
			_putchar(',');
			printf("  ");
			j++;
		}
		printf("%d\n", i * 9);
		i++;
	}
}
