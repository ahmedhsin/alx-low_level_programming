#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * print_array - check the code
 * @a: blablalba
 * @n: bllllll
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
