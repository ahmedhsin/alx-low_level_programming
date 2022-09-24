#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - check the code
 * @a: blablalba
 * @n: blllll
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
