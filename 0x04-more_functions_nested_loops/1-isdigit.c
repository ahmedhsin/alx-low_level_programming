#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _isdigit - check the code
 * @c: blablalba
 * Return: void
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
