#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * print_to_98 - check the code
 * @n: blablalba
 * Return: void
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", 98);
	}
	else
	{
		while (n != 98)
		{
			print("%d, ", n);
			n++;

		}
		printf("%d\n", 98);

	}
}
