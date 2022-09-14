#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * print_times_table - check the code
 * @n:blablabla
 * Return: void
 */

void print_times_table(int n)
{
	int i = 0;
	int j = 0;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		j = 1;
		printf("0");
		while (j <= n)
		{
			if (i * j < 100)
				printf(",  ");
			else
				printf(", ");
			printf("%d", i * j);
			j++;
		}
		printf("\n");
		i++;
	}
}
