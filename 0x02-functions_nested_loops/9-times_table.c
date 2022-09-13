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
		j = 1;
		printf("0");
		while (j <= 9)
		{
			if (i * j < 10)
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
