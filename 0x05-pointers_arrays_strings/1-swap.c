#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: blablalba
 * @b: blllll
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
