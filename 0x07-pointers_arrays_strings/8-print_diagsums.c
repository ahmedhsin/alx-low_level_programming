#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * print_diagsums - check the code
 * @a: blablalba
 * @size : bbbl
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += (a + size * i)[i];
	}
	printf("%d, ", sum);
	sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += (a + size * i)[size - 1 - i];
	}
	printf("%d\n", sum);
}
